#include <SPI.h>
#include <Wire.h>
#include <Scout.h>
#include <GS.h>
#include <bitlash.h>
#include <lwm.h>
#include <js0n.h>

#include <Shell.h>

#include "version.h"

void setup();
void loop();

void setup() {
	Scout.setup(SKETCH_NAME, SKETCH_REVISION, SKETCH_BUILD);
	// Add custom setup code here
}

void loop() {
	Scout.loop();
	// Add custom loop code here
}
