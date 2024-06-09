// C++ code
int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;
int D5 = 6;
int D6 = 7;
int D7 = 8;
int D12 = 12;
int D13 = 13;
int displayNumber = 9;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

  Serial.begin(9600);
}

void DisplayToSevenSegment()
{
  if(displayNumber == 0)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,HIGH);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,LOW);    

  }
  else if(displayNumber == 1)
  {
	  digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);    
      digitalWrite(D3,LOW);    
	  digitalWrite(D4,LOW);    
	  digitalWrite(D5,HIGH);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,LOW);    
  }
  else if(displayNumber == 2)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,LOW);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,HIGH);    
	  digitalWrite(D6,LOW);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 3)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,LOW);    
	  digitalWrite(D6,LOW);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 4)
  {
	  digitalWrite(D1,LOW);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,LOW);    
	  digitalWrite(D5,LOW);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 5)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,LOW);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,LOW);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 6)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,LOW);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,HIGH);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 7)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,LOW);    
	  digitalWrite(D5,LOW);    
	  digitalWrite(D6,LOW);    
	  digitalWrite(D7,LOW);    
  }
  else if(displayNumber == 8)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,HIGH);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,HIGH);    
  }
  else if(displayNumber == 9)
  {
	  digitalWrite(D1,HIGH);
      digitalWrite(D2,HIGH);    
      digitalWrite(D3,HIGH);    
	  digitalWrite(D4,HIGH);    
	  digitalWrite(D5,LOW);    
	  digitalWrite(D6,HIGH);    
	  digitalWrite(D7,HIGH);    
  }
}
void loop()
{
  DisplayToSevenSegment();
  delay(1000);
  if(displayNumber != 0)
  {
    displayNumber--;
  }
  else
  {
    while(1){}
  }
    
}