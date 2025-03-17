#define led1 8
#define led2 9
#define led3 10
#define buzzer 7
#define trig 2
#define echo 3
int sound=500;
void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  long durationindigit,distanceincm;
  
  digitalWrite(trig,LOW);
  delay(2);
  
  digitalWrite(trig,HIGH);
  delay(10);
  
  digitalWrite(trig,LOW);
   
  durationindigit=pulseIn(echo,HIGH);
  distanceincm=(durationindigit/5)/29.1;
  
  if(distanceincm <50)
  {
    digitalWrite(led3,HIGH);
  }
  else
  {
    digitalWrite(led3,LOW);
  }
  if(distanceincm <20)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }
  if(distanceincm <5)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(buzzer,LOW);
  }
  delay(20);
}  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  