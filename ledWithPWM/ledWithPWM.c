// C++ code
int OUTPUT_PIN = A3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(3, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(3, 50);
  delay(1000);
  analogWrite(3, 0);
  delay(1000);

}