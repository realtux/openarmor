<!doctype html>
<html>
<head>
    <title>OpenArmor.org</title>
    <link href="http://netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <link href="http://netdna.bootstrapcdn.com/bootstrap/3.0.3/css/bootstrap.min.css" rel="stylesheet" type="text/css">
    <link href='http://fonts.googleapis.com/css?family=Raleway:300' rel='stylesheet' type='text/css'>
    <script type="text/javascript" src="http://cdn.tierlabs.com/global/jquery/jquery.js"></script>
    <script type="text/javascript" src="http://netdna.bootstrapcdn.com/bootstrap/3.0.3/js/bootstrap.min.js"></script>

    <link rel="SHORTCUT ICON" href="/images/fav.png">

    <style>
        body {
            font-family: 'Raleway', sans-serif;
            font-size: 18px;
            line-height: 28px;
        }

        a:link, a:visited, a:active {
            color: #309919;
        }

        a:hover {
            text-decoration: none;
            color: #999 !important;
        }

        .container {
            max-width: 1400px;
            width: auto;
        }

        .black_stuff {
            color: #fff;
        }

        h1, h2, h3, h4, h5, h6 {
            margin-top: 0;
            font-family: 'Raleway', sans-serif;
        }

        .menu_set {
            display: block;
            text-align: right;
        }

        .menu_set > a {
            display: inline-block;
            padding: 16px 20px;
            color: #9DFF86;
            font-size: 16px;
        }

        .menu_set > a:hover {
            text-decoration: none;
            color: #fff !important;
        }

        .green {
            color: #64FF40;
        }

        .left {
            text-align: left;
        }

        .center {
            text-align: center;
        }

        .right {
            text-align: right;
        }
    </style>
</head>
<body>
<div style="display: block; background: #1F1F1F; padding: 40px;">
    <div class="container black_stuff">
        <div class="row">
            <div class="col-md-6">
                <h1 style="font-size: 46px;"><i class="fa fa-shield"></i> OpenArmor</h1>
            </div>
            <div class="col-md-6 right">
                <div class="menu_set">
                    <a href="/"><i class="fa fa-home"></i> Home</a>
                    <a href="/about"><i class="fa fa-question"></i> About</a>
                    <a href="#/resources"><i class="fa fa-book"></i> Resources</a>
                    <a href="#/tools"><i class="fa fa-wrench"></i> Tools</a>
                </div>
            </div>
        </div>
    </div>
</div>
{% block content %}{% endblock %}
</body>
</html>