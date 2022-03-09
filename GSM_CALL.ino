#include <LiquidCrystal.h>

int i;
char Mb_Num1[]="7904468906;";

void setup() 
{
  Serial.begin(9600);
  delay(1000);
  GSM_Init();
  delay(1000);
}

void loop() 
{
  GSM_Call( Mb_Num1 );
  delay(1000);
  Serial.print("AT\r");
  delay(500);  
}

void GSM_Init()
{
 
}

void GSM_Call(char *Mb_Num1 )
{
  delay(500);
  Serial.print("ATD ");
  delay(500);
  for(i=0; Mb_Num1[i] != '\0'; i++)
  {
    Serial.print((char)Mb_Num1[i]);
    delay(50);
  }
  Serial.print("\r");
  delay(10000);
  Serial.print("ATH");
  delay(1000);
  Serial.print("\r");
  delay(500);
}
