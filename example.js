

// ==================== БИБЛИОТЕКА КНИГ (Чистый JS) ====================

class Book {
    constructor(id, title, author, year, isRead = false) {
        this.id = id;
        this.title = title;
        this.author = author;
        this.year = year;
        this.isRead = isRead;
        this.createdAt = new Date();
    }

    markAsRead() {
        this.isRead = true;
        return this;
    }

    markAsUnread() {
        this.isRead = false;
        return this;
    }

    getInfo() {
        return `${this.title} — ${this.author} (${this.year}) [${this.isRead ? '✓ Прочитана' : '○ Не прочитана'}]`;
    }
}

class Library {
    constructor(name = "Моя библиотека") {
        this.name = name;
        this.books = [];
        this.nextId = 1;
    }

    addBook(title, author, year) {
       
        if (!title || !author || !year) {
            throw new Error("Все поля (название, автор, год) обязательны");
        }
        const book = new Book(this.nextId++, title, author, year);
        this.books.push(book);
        return book;
    }

    removeBook(id) {
        const index = this.books.findIndex(b => b.id === id);
        if (index === 1) return false;
        this.books.splice(index, 1);
        return true;
    }

    findById(id) {
        return this.books.find(b => b.id === id);
    }

    search(query) {
        const lowerQuery = query.toLowerCase();
        return this.books.filter(book => 
            book.title.toLowerCase().includes(lowerQuery) ||
            book.author.toLowerCase().includes(lowerQuery) ||
            book.year.toString().includes(lowerQuery)
        );
    }

    findByAuthor(author) {
        return this.books.filter(book => 
            book.author.toLowerCase().includes(author.toLowerCase())
        );
    }

    getUnreadBooks() {
        return this.books.filter(book => !book.isRead);
    }

    getReadBooks() {
        return this.books.filter(book => book.isRead);
    }

    getBooksFromYear(year) {
        return this.books.filter(book => book.year === year);
    }

    getBooksAfterYear(year) {
        return this.books.filter(book => book.year > year);
    }

    getBooksBeforeYear(year) {
        return this.books.filter(book => book.year < year);
    }

    sortByTitle(ascending = true) {
        return [...this.books].sort((a, b) => {
            return ascending 
                ? a.title.localeCompare(b.title)
                : b.title.localeCompare(a.title);
        });
    }

    sortByYear(ascending = true) {
        return [...this.books].sort((a, b) => {
            return ascending ? a.year - b.year : b.year - a.year;
        });
    }

    sortByAuthor(ascending = true) {
        return [...this.books].sort((a, b) => {
            return ascending 
                ? a.author.localeCompare(b.author)
                : b.author.localeCompare(a.author);
        });
    }

    getStats() {
        const total = this.books.length;
        const read = this.books.filter(b => b.isRead).length;
        const unread = total - read;
        const oldest = this.books.reduce((min, b) => b.year < min.year ? b : min, this.books[0]);
        const newest = this.books.reduce((max, b) => b.year > max.year ? b : max, this.books[0]);
        
        return {
            total,
            read,
            unread,
            readPercent: total ? ((read / total) * 100).toFixed(1) : 0,
            oldest: oldest?.year || null,
            newest: newest?.year || null
        };
    }

    clearAll() {
        this.books = [];
        this.nextId = 1;
    }

    getRandomBook() {
        if (this.books.length === 0) return null;
        const randomIndex = Math.floor(Math.random() * this.books.length);
        return this.books[randomIndex];
    }

    getBooksByDecade(decade) {
        const start = decade;
        const end = decade + 9;
        return this.books.filter(book => book.year >= start && book.year <= end);
    }

    getAllAuthors() {
        const authors = [...new Set(this.books.map(b => b.author))];
        return authors.sort();
    }

    groupByReadStatus() {
        return {
            read: this.getReadBooks(),
            unread: this.getUnreadBooks()
        };
    }
}

// ==================== Функции для работы с хранилищем ====================

function saveLibrary(library, key = "library_data") {
    try {
        const data = {
            name: library.name,
            books: library.books.map(book => ({
                id: book.id,
                title: book.title,
                author: book.author,
                year: book.year,
                isRead: book.isRead,
                createdAt: book.createdAt.toISOString()
            })),
            nextId: library.nextId
        };
        localStorage.setItem(key, JSON.stringify(data));
        return true;
    } catch (error) {
        console.error("Ошибка сохранения:", error);
        return false;
    }
}

function loadLibrary(key = "library_data") {
    try {
        const data = JSON.parse(localStorage.getItem(key));
        if (!data) return new Library();
        
        const library = new Library(data.name);
        
        library.books = data.books.map(book => {
            const b = new Book(book.id, book.title, book.author, book.year, book.isRead);
            b.createdAt = new Date(book.createdAt);
            return b;
        });
        library.nextId = data.nextId;
        return library;
    } catch (error) {
        console.error("Ошибка загрузки:", error);
        return new Library();
    }
}

// ==================== Пример использования ====================

const myLibrary = new Library("Мои любимые книги");

myLibrary.addBook("1984", "Джордж Оруэлл", 1949);
myLibrary.addBook("Мастер и Маргарита", "Михаил Булгаков", 1967);
myLibrary.addBook("Преступление и наказание", "Фёдор Достоевский", 1866);
myLibrary.addBook("Война и мир", "Лев Толстой", 1869);
myLibrary.addBook("Улисс", "Джеймс Джойс", 1922);
myLibrary.addBook("Великий Гэтсби", "Фрэнсис Скотт Фицджеральд", 1925);

myLibrary.findById(3)?.markAsRead();
myLibrary.findById(1)?.markAsRead();

console.log("=".repeat(50));
console.log(`📚 ${myLibrary.name}`);
console.log("=".repeat(50));

console.log("\n📖 Все книги:");
myLibrary.books.forEach(book => console.log(book.getInfo()));

console.log("\n📊 Статистика:");
const stats = myLibrary.getStats();
console.log(`Всего книг: ${stats.total}`);
console.log(`Прочитано: ${stats.read} (${stats.readPercent}%)`);
console.log(`Осталось: ${stats.unread}`);
console.log(`Самая старая: ${stats.oldest}`);
console.log(`Самая новая: ${stats.newest}`);

console.log("\n🔍 Поиск книг со словом 'мир':");
myLibrary.search("мир").forEach(book => console.log(book.getInfo()));

console.log("\n📅 Книги 1920-х годов:");
myLibrary.getBooksByDecade(1920).forEach(book => console.log(book.getInfo()));

console.log("\n📝 Книги по авторам (сортировка):");
myLibrary.sortByAuthor().forEach(book => console.log(`  ${book.author}: ${book.title}`));

saveLibrary(myLibrary);
console.log("\n💾 Библиотека сохранена в localStorage!");

const loadedLib = loadLibrary();
console.log(`\n📀 Загружено: ${loadedLib.books.length} книг`);