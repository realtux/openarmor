module.exports = {

    home: function (req, res) {
        res.view('home/home.swig', {});
    },

    about : function(req, res) {
        res.view('home/about.swig', {});
    },

    test : function(req, res) {
        Users.findOne('53e43f2aecf2e12fad30fdd1').done(function(err, user) {
            res.send(user)
        });

        //res.send();
        //res.view('home/about.swig', {});
    },

    _config: {}

};