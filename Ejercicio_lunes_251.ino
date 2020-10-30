void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float v=0,rl=0,i=0;
delay(1000);
v=analogRead(A0);
v=v*(5.0/1023.0);
Serial.println("analogico");
Serial.println(v);
Serial.print('\n');
rl=613.49*((5.0/v)-1.0); 
Serial.println("resistencia");
Serial.println(rl);
Serial.println("ohm");
Serial.print('\n');
i=pow((rl/126951.0),-1.1655);
Serial.println("Intesidad luminusa de: ");
Serial.println(i);
Serial.println("Lux");
Serial.print('\n');
if(i<=2000)
{
  digitalWrite(13,HIGH);
}
else
{digitalWrite(13,LOW);
}
}
