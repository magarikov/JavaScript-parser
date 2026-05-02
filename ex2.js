





    function makeActivator() {
        if (document.getElementById('bvi-activator'))
            return null;
        var a = document.createElement('a');
        a.href = '#';
        a.id = 'bvi-activator';
        a.className = 'bvi-open nav-link p-0 text-decoration-none';
        a.setAttribute('title', 'Версия для слабовидящих');
        a.innerHTML = '<span class="sr-only">Версия для слабовидящих</span><i class="icon fa fa-eye bviIcon" aria-hidden="true"></i>';
        return a
    }
    function insertBeforeNotifications() {
        var notif = document.getElementById('nav-notification-popover-container');
        if (!notif || !notif.parentElement)
            return !1;
        var wrap = document.createElement('div');
        wrap.className = 'nav-bvi nav-item d-flex align-items-center';
        var a = makeActivator();
        if (!a)
            return !0;
        wrap.appendChild(a);
        notif.parentElement.insertBefore(wrap, notif);
        return !0
    }
    function fallbackInsert() {
        var usernav = document.getElementById('usernavigation') || document.querySelector('[data-region="header-actions-container"]') || document.querySelector('.navbar-nav');
        if (!usernav)
            return !1;
        var wrap = document.createElement('div');
        wrap.className = 'nav-bvi nav-item d-flex align-items-center';
        var a = makeActivator();
        if (!a)
            return !0;
        wrap.appendChild(a);
        usernav.insertBefore(wrap, usernav.firstChild || null);
        return !0
    }
    function initBVI() {
        if (window.isvek && window.isvek.Bvi) {
            try {
                new isvek.Bvi()
            } catch (e) {}
        }
    }
    function updateBviOffsets() {
        var body = document.body;
        var panel = document.querySelector('.bvi-panel');
        var header = document.querySelector('.navbar.fixed-top');
        var pageWrapper = document.getElementById('page-wrapper') || document.getElementById('page');
        if (pageWrapper && !pageWrapper.dataset.bviBasePt) {
            pageWrapper.dataset.bviBasePt = getComputedStyle(pageWrapper).paddingTop.replace('px', '') || '0';
        }
        var panelHeight = 0;
        if (panel && window.getComputedStyle(panel).display !== 'none' && panel.getBoundingClientRect) {
            panelHeight = Math.round(panel.getBoundingClientRect().height)
        }
        document.documentElement.style.setProperty('--bvi-offset', panelHeight + 'px');
        if (header)
            header.style.top = panelHeight ? (panelHeight + 'px') : '';
        if (pageWrapper) {
            var base = parseFloat(pageWrapper.dataset.bviBasePt || '0');
            pageWrapper.style.paddingTop = panelHeight ? (base + panelHeight) + 'px' : ''
        }
    }
    function debounce(fn, t) {
        let id;
        return function() {
            clearTimeout(id);
            id = setTimeout(fn, t || 50)
        }
    }
    function attachObservers() {
        var mo = new MutationObserver(debounce(updateBviOffsets, 10));
        mo.observe(document.body, {
            attributes: !0,
            attributeFilter: ['class']
        });
        window.addEventListener('resize', debounce(updateBviOffsets, 50));
        document.addEventListener('click', function(e) {
            var t = e.target;
            if (!t)
                return;
            if (t.closest('.bvi-open') || t.closest('[data-bvi="panel-hide"]') || t.closest('[data-bvi="panel-show"]') || t.closest('[data-bvi="close"]')) {
                setTimeout(updateBviOffsets, 10)
            }
        })
    }
    function ready(fn) {
        if (document.readyState === 'loading')
            document.addEventListener('DOMContentLoaded', fn);
        else
            fn()
    }
    ready(function() {
        if (!insertBeforeNotifications())
            fallbackInsert();
        initBVI();
        attachObservers();
        setTimeout(updateBviOffsets, 10)
    })
()
