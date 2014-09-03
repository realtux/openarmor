<!doctype html>
<html>
<head>
    <title>OpenArmor.org</title>

    <link href="http://netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.min.css" rel="stylesheet">
    <link href="http://netdna.bootstrapcdn.com/bootstrap/3.0.3/css/bootstrap.min.css" rel="stylesheet">
    <link href="http://fonts.googleapis.com/css?family=Raleway:300" rel="stylesheet">
    <link href="/css/main.css" rel="stylesheet">

    <script src="http://cdn.tierlabs.com/global/jquery/jquery.js"></script>
    <script src="http://netdna.bootstrapcdn.com/bootstrap/3.0.3/js/bootstrap.min.js"></script>
    <script src="//ajax.googleapis.com/ajax/libs/angularjs/1.3.0-beta.18/angular.min.js"></script>
    <script src="//code.angularjs.org/1.2.22/angular-sanitize.min.js"></script>

    <link rel="SHORTCUT ICON" href="/images/fav.png">
</head>
<body>
<div class="wrapper">
    <div class="header">
        <div style="display: block; background: #1F1F1F; padding: 40px 40px 0 40px;">
            <div class="container black_stuff">
                <div class="row">
                    <div class="col-md-12">
                        <h1 style="font-size: 46px;"><i class="fa fa-shield"></i> OpenArmor</h1>
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-12 right">
                        <div class="menu_set">
                            <a href="/"><i class="fa fa-home"></i> Home</a>
                            <a href="/resources"><i class="fa fa-book"></i> Resources</a>
                            <a href="/tools"><i class="fa fa-wrench"></i> Tools</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div style="display: block; background: #fff; padding: 20px 0;">
        {% block content %}{% endblock %}
    </div>
    <div class="push"></div>
</div>
<div class="footer">
    <div style="display: block; background: #000; padding: 40px 40px 40px 40px; font-size: 14px;">
        <div class="container black_stuff">
            <div class="row">
                <div class="col-md-3">
                    <strong>Useful Links</strong>
                    <ul>
                        <li><a href="https://www.eff.org" target="_blank">EFF</a></li>
                        <li><a href="http://epic.org" target="_blank">EPIC</a></li>
                    </ul>
                </div>
                <div class="col-md-3">
                    <strong>Privacy</strong>
                    <ul>
                        <li><a href="https://www.torproject.org" target="_blank">TOR Project</a></li>
                    </ul>
                </div>
                <div class="col-md-3">
                    <strong>Encryption</strong>
                    <ul>
                        <li><a href="https://www.gnupg.org" target="_blank">GNU Privacy Guard</a></li>
                    </ul>
                </div>
                <div class="col-md-3">
                    <strong>Other Stuff</strong>
                    <ul>
                        <li><a href="https://github.com/ebrian/openarmor" target="_blank">GitHub Project</a></li>
                    </ul>
                </div>
            </div>
        </div>
    </div>
</div>
</body>
</html>