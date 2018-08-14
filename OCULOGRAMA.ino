int lectura=A0;
int lecturaOjo=0;

void setup()
{
Serial.begin(9600);
pinMode(lectura,INPUT);

}

void loop() 
{
 lecturaOjo=analogRead(lectura);
 Serial.println(lecturaOjo);
 delay(80);
}
