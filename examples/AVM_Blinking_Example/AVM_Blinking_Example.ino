#include <avm_blinking.h>

// .ino

void setup() {
	setup_AVM_Blink();
}

void loop() {
	AVM_Blink(250);
	AVM_Blink(1000);
	AVM_Blink(250);
	AVM_Blink(1000);
}