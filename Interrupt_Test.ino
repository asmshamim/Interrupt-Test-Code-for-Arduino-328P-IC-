void setup()

{
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(A5, INPUT);
attachInterrupt(0, blink, RISING);
//"0" means digital pin 2 & 1 means digital pin 3(328p IC), 
//"blink" is the task what to do
//"RISING" is the condition state it can be "FALLING" or "CHANGE" also

}

void loop()
{

//Add your task

}

void blink()

{

digitalWrite(13, !digitalRead(13)); // Toggle LED on pin 13
Serial.println(13);
Serial.println("Interrupt");
delay(10000);
}
