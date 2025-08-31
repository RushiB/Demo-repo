#include <Arduino.h>

// put function declarations here:
int myFunction(int, int); 

void DoSerialSetup_LOCAL()
{
  Serial.begin(9600);
  delay(1100); // milli sec wait needed for serial port to get ready
  Serial.println("Hello world");
  Serial.print("Hello world");
}

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  DoSerialSetup_LOCAL();

}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}