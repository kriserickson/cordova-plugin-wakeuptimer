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

Wakeup.prototype.iswakeup = function(result) {
    exec(function(){
		result(true);
	}, function(){
		result(false);
	}, "WakeupPlugin", "iswakeup", []);
};

Wakeup.prototype.wakescreen = function() {
    exec(function(){}, function(){}, "WakeupPlugin", "wakescreen", []);
};

Wakeup.prototype.cancelwakescreen = function() {
    exec(function(){}, function(){}, "WakeupPlugin", "cancelwakescreen", []);
};

module.exports = new Wakeup();
