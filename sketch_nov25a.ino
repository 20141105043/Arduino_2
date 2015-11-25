

void setup ()
{
  
}
 
void loop()
{
  for(int i=200;i<=800;i++)  //用循环的方式将频率从200HZ 增加到800HZ
  {
    pinMode(4,OUTPUT);
    tone(4,i);        //在四号端口输出频率
    delay(5);                           
  }
  delay(4000);
  for(int i=800;i>=200;i--)
  {
    pinMode(4,OUTPUT);
    tone(4,i);
    delay(10);
  }
}
