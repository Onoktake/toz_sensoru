int veriPini = A0; // Siyah kablonun (sensörün soldan 2. pini) bağlı olduğu pin
float toz=0; //Gelen veriyi sakladığımız değişken
int led=2; // Beyaz kablonun (sensörün soldan 3. pini) bağlı olduğu pin
int delayTime=280; /sure
int delayTime2=40;
float offTime=9680;

void setup(){
Serial.begin(9600); //Verileri okuyabilmek için seri portu başlatıyoruz.
pinMode(led,OUTPUT);
pinMode(veriPini, INPUT);
}
 
void loop(){

digitalWrite(led,LOW); 
delayMicroseconds(delayTime);
dustVal=analogRead(veriPini); 
delayMicroseconds(delayTime2);
digitalWrite(led,HIGH); 
delayMicroseconds(offTime);
delay(1000);
if (dustVal>36.455)
Serial.println((float(dustVal/1024)-0.0356)*120000*0.035);
}
