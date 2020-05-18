int veriPini = A0; // Siyah kablonun (sensörün soldan 2. pini) bağlı olduğu pin
float toz=0; //Gelen veriyi sakladığımız değişken
int led=2; // Beyaz kablonun (sensörün soldan 3. pini) bağlı olduğu pin

void setup(){
Serial.begin(9600); //Verileri okuyabilmek için seri portu başlatıyoruz.
pinMode(led,OUTPUT);
pinMode(veriPini, INPUT);
}
 
void loop(){
digitalWrite(led,LOW); 
delayMicroseconds(280);
toz=analogRead(veriPini); 
delayMicroseconds(40);
digitalWrite(led,HIGH); 
delayMicroseconds(9860);
delay(1000);
if (toz>36.455)
Serial.println((float(toz/1024)-0.0356)*120000*0.035);
}
