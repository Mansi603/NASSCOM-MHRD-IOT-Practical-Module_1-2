int RECV_PIN = 5;
int redled = 11;
int greenled = 10;
int blueled = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(blueled,OUTPUT);
Serial.begin(9600);
Serial.printIn("Enabling IRin");
irrecv.enableIRIn();
Serial.printIn("Enabled IRin");
}
void loop()
{
if(irrecv.decode(&results))
{
int value = results.value;
Serial.printIn(value);
switch(value)
{
case 2295:
digitalWrite(redled, HIGH);
delay(1000);
digitalWrite(redled,LOW);
break;

case 18615:
digitalWrite(greenled, HIGH);
delay(1000);
digitalWrite(greenled,LOW);
break;
 
case 10455:
digitalWrite(blueled, HIGH);
delay(1000);
digitalWrite(blueled,LOW);
}
irrecv.resume();
}
}




