module.exports = {

    home: function (req, res) {
        res.view('home/home.swig', {});
    },

    about : function(req, res) {
        res.view('home/about.swig', {});
    },

    _config: {}

};