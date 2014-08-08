module.exports = {

    home: function (req, res) {
        res.view('home/home.swig', {});
    },

    about : function(req, res) {
        res.view('home/about.swig', {});
    },

    test : function(req, res) {
        Users.find().done(function(err, user) {
            res.send(user)
        });

        //res.send();
        //res.view('home/about.swig', {});
    },

    _config: {}

};