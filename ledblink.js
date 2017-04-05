var b = require('bonescript');

var ledPin = "USR3";

b.pinMode(ledPin, b.OUTPUT);
var state = b.LOW;
b.digitalWrite(ledPin, state);

for(var i= 0;i<=5;i++){
	setInterval(toggle, 1000);
 if (i === 5) { break; }
}

function toggle() {
    if(state == b.LOW)
        state = b.HIGH;
    else
        state = b.LOW;
    b.digitalWrite(ledPin, state);
}
