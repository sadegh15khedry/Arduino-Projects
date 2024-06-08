// C++ code
int OUTPUT_PIN = A3;
int INPUT_PIN = A0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println(analogRead(INPUT_PIN));
  delay(1000); // Wait for 1000 millisecond(s)

}