int fadevalue=0;

void setup()
{
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop()
{
for(fadevalue=0; fadevalue<=225; fadevalue+=5)
{
analogWrite(11,fadevalue);
delay(500);
}
for(fadevalue=225; fadevalue>=0; fadevalue-=5)
{
analogWrite(11,fadevalue);
delay(500);
}
for(fadevalue=0; fadevalue<=225; fadevalue+=5)
{
analogWrite(10,fadevalue);
delay(500);
}
for(fadevalue=225; fadevalue=0; fadevalue-=5)
{
analogWrite(10,fadevalue);
delay(500);
}
for(fadevalue=0; fadevalue<=225; fadevalue+=5)
{
analogWrite(9,fadevalue);
delay(500);
}
for(fadevalue=225; fadevalue>=0; fadevalue-=5)
{
analogWrite(9,fadevalue);
delay(500);
}
}
