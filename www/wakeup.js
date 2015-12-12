var exec = require("cordova/exec");

/**
 * This is a global variable called wakeup exposed by cordova
 */    
var Wakeup = function(){};

Wakeup.prototype.wakeup = function(success, error, options) {
    exec(success, error, "WakeupPlugin", "wakeup", [options]);
};

Wakeup.prototype.snooze = function(success, error, options) {
    exec(success, error, "WakeupPlugin", "snooze", [options]);
};

Wakeup.prototype.iswakeup = function(success, error) {
    exec(success, error, "WakeupPlugin", "iswakeup");
};

Wakeup.prototype.wakescreen = function(success, error) {
    exec(success, error, "WakeupPlugin", "wakescreen");
};

Wakeup.prototype.cancelwakescreen = function(success, error) {
    exec(success, error, "WakeupPlugin", "cancelwakescreen");
};

module.exports = new Wakeup();
