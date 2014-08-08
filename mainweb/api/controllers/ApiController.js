module.exports = {

    lookup_user : function(req, res) {
        Users
            .findOne({
                username : req.body.username
            })
            .done(function(err, user) {
                res.setHeader('Content-Type', 'text/json');

                // no user?
                if (user == undefined) {
                    return res.send({
                        status: 'error',
                        payload: {
                            message: 'User not found'
                        }
                    });
                }

                return res.send({
                    status: 'ok',
                    payload: {
                        user: user
                    }
                });
            });
    },

    _config: {}

};