// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000);
  
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(1000);
  
  digitalWrite(5, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000);
}