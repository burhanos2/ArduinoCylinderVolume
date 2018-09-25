const float pi = 3.14159;
float height;
float diameter;
//volume calc
float calculateVolume(float diameter, float height)
{
  float Volume = pi*(diameter/2)*(diameter/2)*height;
  return Volume;
}
//diameter check, goes into height check
float checkDiameter()
{
  diameter = 0;
  
  Serial.println("Hello, what is the diameter of the cilinder?");
while (Serial.available() == 0)
{}
  diameter = Serial.parseFloat();
  if(diameter == 0)
  { Serial.println("Please input a number");
  delay(1500);
  checkDiameter(); }
  else
  {checkHeight(); }
  }
// height check
float checkHeight()
{
   height = 0;
   
    Serial.println("and what is the height of the cilinder?");
  while (Serial.available() == 0)
{}
  height = Serial.parseFloat();
  if(height == 0)
  {
   Serial.println("Please input a number");
  delay(1500); 
    checkHeight();}
  }
  
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

checkDiameter();
 Serial.print("The volume of this cilinder is: " );
 Serial.println(calculateVolume(diameter, height));
}

void loop() {
}
