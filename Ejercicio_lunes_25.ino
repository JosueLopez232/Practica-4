  float volt=0,rl,il;
  void setup(){
    
    Serial.begin(9600);
    pinMode(A0,INPUT);
     pinMode(13,OUTPUT);
    }
  void loop(){
    
    volt=analogRead(A0);
    volt=volt*(5.0/1023.0);
    rl=613*((5/volt)-1);
    il=pow((rl/126951),-1.1655);
    
   
    Serial.println("La intensidad luminosas es= ");
    Serial.println(il);
    Serial.println("LUX");
     Serial.println("Voltaje=");
    Serial.println(volt);
    Serial.println("Volts");
    Serial.println("Resistencia=");
    Serial.println(rl);
    Serial.println("ohms");
    Serial.println("");
    Serial.println("");
    delay(1000);
     
  if(il>=2000)
  {
    digitalWrite(13,LOW);
  }
     
  if(il<2000)
  {
    digitalWrite(13,HIGH);
  }
  
  }
