#define OnSensor 3
#define SolSensor 2
#define SagSensor 12
#define SagCizgi 4
#define SolCizgi 5
#define ArkaCizgi 10
#define OnCizgi 11

#define MotorR1 7
#define MotorR2 6
#define MotorL1 9
#define MotorL2 8


void setup() {

pinMode(OnSensor,INPUT);
pinMode(SolSensor,INPUT);
pinMode(SagSensor,INPUT);
pinMode(SagCizgi,INPUT);
pinMode(SolCizgi,INPUT);
pinMode(ArkaCizgi,INPUT);
pinMode(OnCizgi,INPUT);

pinMode(MotorR1,OUTPUT);
pinMode(MotorR2,OUTPUT);
pinMode(MotorL1,OUTPUT);
pinMode(MotorL2,OUTPUT);

 
  
  Serial.begin(9600);

  ileri();
  delay(2000);
}

void loop() {

  Serial.print("Cisim Sensörleri:"),
  Serial.print(digitalRead(OnSensor));
  Serial.print(",");
  Serial.println(digitalRead(SolSensor));
  Serial.print("çizgi Sensörleri:");
  Serial.print(digitalRead(SagCizgi));
  Serial.print(",");
  Serial.println(digitalRead(SolCizgi));
  delay(500);


  if(digitalRead(SagCizgi)==1 && digitalRead(SolCizgi)==1 && digitalRead(ArkaCizgi)==1 && digitalRead(OnCizgi)==1){  // ?

    if(digitalRead(OnSensor)==1 && digitalRead(SolSensor)==0 && digitalRead(SagSensor==0){ //
     ileri(); 
     }
      if(digitalRead(OnSensor)==0 && digitalRead(SolSensor)==1 && digitalRead(SagSensor)==0){ //
      sol();
      }
       if(digitalRead(OnSensor)==0 && digitalRead(SolSensor)==0 && digitalRead(SagSensor)==1){ //
       sag();
       }
         if(digitalRead(OnSensor)==0 && digitalRead==0){
          sag();
          }
          }
  

  else{

    geri();
    delay(250);
    sol();
    delay(250);

  } 
    }
      
  
  void ileri(){

    digitalWrite(MotorR1,HIGH);
    digitalWrite(MotorR2,LOW);

    digitalWrite(MotorL1,HIGH);
    digitalWrite(MotorL2,LOW);
    
    }


  void geri(){
    digitalWrite(MotorR1,LOW);
    digitalWrite(MotorR2,HIGH);

    digitalWrite(MotorL1,LOW);
    digitalWrite(MotorL2,HIGH);
    
  }

  
  void sol(){

   digitalWrite(MotorR1,HIGH);
   digitalWrite(MotorR2,LOW);

   digitalWrite(MotorL1,LOW);
   digitalWrite(MotorL2,HIGH);
    
  }

  
  void sag(){

   digitalWrite(MotorR1,LOW);
   digitalWrite(MotorR2,HIGH);

   digitalWrite(MotorL1,HIGH);
   digitalWrite(MotorL2,LOW);
    
  }
