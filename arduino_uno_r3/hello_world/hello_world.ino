void setup() {
	Serial.begin(115200);
	Serial.println("\n+------------------------------+\n|        System started        |\n+------------------------------+");
	Serial.println("Hello, World!");

	pinMode(LED_BUILTIN, OUTPUT);  // Initialize digital pin LED_BUILTIN as an output
}

void loop() {
	Serial.print(".");

	digitalWrite(LED_BUILTIN, HIGH);  // Turn on the LED
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);	 // Turn off the LED
	delay(2000);
}
