// C++ code
int OUTPUT_PIN = A3;
int INPUT_PIN = A0;
float readValue;
float calcValue;
float scale_factor = 0.01;
float temp;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  readValue = analogRead(INPUT_PIN);
  calcValue = readValue * (5.0/1023.0);
  temp = calcValue/ scale_factor;
  Serial.println(temp);
  delay(1000); // Wait for 1000 millisecond(s)

}