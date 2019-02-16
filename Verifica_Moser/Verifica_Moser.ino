int rosso = 11;
int giallo = 10;
int bianco = 9;
int verde = 8;
int DURATA = 0;

void setup() {
  // put your setup code here, to run once:
DURATA = 0;
Serial.begin(9600);  
pinMode(rosso, OUTPUT);
pinMode(giallo, OUTPUT);
pinMode(bianco, OUTPUT);
pinMode(verde, OUTPUT);


  Serial.print("quanto deve durare il rosso?(secondi)");
  while(Serial.available() == 0) {};
  DURATA = Serial.readString().toInt();
  DURATA = DURATA *1000;
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(rosso, HIGH);
digitalWrite(giallo, LOW);
digitalWrite(bianco, LOW);
digitalWrite(verde, LOW);
delay(DURATA);

digitalWrite(giallo, HIGH);
digitalWrite(rosso, LOW);
digitalWrite(bianco, LOW);
digitalWrite(verde, LOW);
delay(2*DURATA);

digitalWrite(bianco, HIGH);
digitalWrite(rosso, LOW);
digitalWrite(giallo, LOW);
digitalWrite(verde, LOW);
delay(DURATA);

digitalWrite(verde, HIGH);
digitalWrite(rosso, LOW);
digitalWrite(giallo, LOW);
digitalWrite(bianco, LOW);
delay(3*DURATA);



} 
  
  int seriale(String s, int i){
  Serial.print(s);
  while (Serial.available()==0){};
  i = Serial.readString().toInt();
  return i;
  }
  

