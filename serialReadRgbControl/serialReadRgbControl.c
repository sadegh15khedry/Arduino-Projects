// C++ code
int OUTPUT_PIN1 = 3;
int OUTPUT_PIN2 = 5;
int OUTPUT_PIN3 = 6;
int mode = 0;
String input;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(OUTPUT_PIN1, OUTPUT);
  pinMode(OUTPUT_PIN2, OUTPUT);
  pinMode(OUTPUT_PIN3, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  //digitalWrite(OUTPUT_PIN1, HIGH);
  //digitalWrite(OUTPUT_PIN2, HIGH);
  //digitalWrite(OUTPUT_PIN, HIGH);
  input = Serial.readString();
  if (input == "red"){
  	analogWrite(OUTPUT_PIN3, 0);
  	analogWrite(OUTPUT_PIN2, 0);
  	analogWrite(OUTPUT_PIN1, 255);
  	//delay(5000); // Wait for 1000 millisecond(s)
  }
  else if (input == "green"){
  	analogWrite(OUTPUT_PIN3, 255);
  	analogWrite(OUTPUT_PIN2, 0);
  	analogWrite(OUTPUT_PIN1, 0);
  	//delay(5000); // Wait for 1000 millisecond(s)
    }
   else  if (input == "blue"){
  	analogWrite(OUTPUT_PIN3, 0);
  	analogWrite(OUTPUT_PIN2, 255);
  	analogWrite(OUTPUT_PIN1, 0);
  	//delay(5000); // Wait for 1000 millisecond(s)
  }
  

}