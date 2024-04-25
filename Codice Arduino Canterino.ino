/*
Arduino Canterino:
        Scopo Progetto --> Convertire le note di due canzoni, famose, in                  
                           frequenze per farle suonare su commando da arduino il tutto facendo andare a tempo di musica i diversi Led.  
By Marco Perrotta.
	      *****************************************
	      **Frequenze per le note da me rilevate**
	      *****************************************
 Freq.Note             Durata Ritmica 
DO  --> 262   (Diferisce a seconda del tipo di nota) 
RE  --> 294                    |
MI  --> 330          	       | 	 
FA  --> 349                    V 
SOL --> 392                  1200    
LA  --> 440		     800
SI  --> 494		     600
DO  --> 524		     400
RE  --> 588		     300
RE# --> 311		     200
SOL#--> 415                  150
                             100
_N.B___________________________________________________________________________________                             
  - Ogni nota la strutturo mettendo il comando 'tone(buzzer,freq,durata);'
  - Le pause le metto unite al deley che divide ogni nota aumentando tale lavoro
    di 200 'delay(N+200)'
  - I due tasti avviano le due diverse canzoni  

*/

int pos = 0;

void setup()
{
  
 pinMode(10,OUTPUT);     //piezo
 pinMode(9,OUTPUT) ;    //lucina prima voce   
 pinMode(11,OUTPUT);   //seconde voci
 pinMode(A0, INPUT);  //'O surdat'nnamurat
 pinMode(A1, INPUT); //Tekila
 
}

void loop()
{
 
  if (digitalRead(A0) == HIGH) {
  
    
    delay(4000);
  
  digitalWrite(9,HIGH);
tone(10, 330, 600);
  digitalWrite(9,LOW);
  delay(400);

 digitalWrite(9,HIGH);
 tone(10, 330, 200);
   digitalWrite(9,LOW);
  delay(400);
  
digitalWrite(9,HIGH);  
tone(10, 330, 200);
  digitalWrite(9,LOW);
delay(400);
  
digitalWrite(9,HIGH);  
tone(10, 294, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
 tone(10, 294, 300);
  digitalWrite(9,LOW);
   delay(400);
  
  digitalWrite(9,HIGH);
 tone(10, 262, 100);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
 tone(10, 262, 1200);
  digitalWrite(9,LOW);
  delay (800); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 600);
  digitalWrite(9,LOW);
  delay(400);

  digitalWrite(9,HIGH);
tone ( 10, 349, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 330, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 330, 300);
  digitalWrite(9,LOW);
 delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 294, 100);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 294, 1200); 
  digitalWrite(9,LOW);
  delay(800);
  
  digitalWrite(9,HIGH);
tone ( 10, 494, 600);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 494, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 494, 200);
  digitalWrite(9,LOW);
 delay(400);
  
  digitalWrite(9,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(9,LOW);
delay(400); 
  
  digitalWrite(9,HIGH);
tone ( 10, 440, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 200);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 524, 400);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 440, 400);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 400);
  digitalWrite(9,LOW);
  delay(400);
  
  digitalWrite(9,HIGH);
 tone ( 10, 349, 400);
  digitalWrite(9,LOW);
delay (400); 
  
  digitalWrite(9,HIGH);
  tone ( 10, 330, 300);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone (10, 349, 100);
  digitalWrite(9,LOW);
 delay (400); 
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 200);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 440, 200);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 330, 400);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 294, 400);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
  tone (10, 262, 1200);
  digitalWrite(9,LOW);
  delay (800);

 digitalWrite(9,HIGH); 
tone (10, 349, 600);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 200);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 200);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 200);
  digitalWrite(9,LOW);
  delay (400); 
  
  digitalWrite(9,HIGH);
tone ( 10, 440, 300);
  digitalWrite(9,LOW);
  delay (400); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 100);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 400);
  digitalWrite(9,LOW);
  delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 330, 1200);
  digitalWrite(9,LOW);
   delay (400);
  
  digitalWrite(9,HIGH);
tone ( 10, 440, 600);
  digitalWrite(9,LOW);
   delay (400); 

 digitalWrite(9,HIGH); 
 tone ( 10, 440, 200);
  digitalWrite(9,LOW);
   delay (400); 
  
  digitalWrite(9,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(9,LOW);
   delay (400); 
  
  digitalWrite(9,HIGH);
 tone ( 10, 494, 200);
  digitalWrite(9,LOW);
   delay (400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 524, 300);
  digitalWrite(9,LOW);
   delay (400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 440, 100);
  digitalWrite(9,LOW);
   delay (400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 494, 1200);
  digitalWrite(9,LOW);
   delay (400);
  
  digitalWrite(9,HIGH);
  tone ( 10, 588, 400);
  digitalWrite(9,LOW);
   delay (400); 
  
  //Ritornello
  
  digitalWrite(11,HIGH);
   tone ( 10, 588, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
   tone ( 10, 588, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 800);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 600);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 588, 300);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
tone ( 10, 494, 100);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 800);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200 );
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 300);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 100);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 400);
  digitalWrite(11,LOW);
    delay (400);  
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 349,200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 330, 300);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 100);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 330, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 294, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 1200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 588, 400);
  digitalWrite(11,LOW); 
  
  
  digitalWrite(11,HIGH);
   tone ( 10, 588, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
   tone ( 10, 588, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 800);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 524, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 600);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 588, 300);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
tone ( 10, 494, 100);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 800);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200 );
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 494, 300);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 100);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 400);
  digitalWrite(11,LOW);
    delay (400);  
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 600);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 349,200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 330, 300);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 349, 100);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 392, 200);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 440, 200);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 330, 400);
  digitalWrite(11,LOW);
    delay (400); 
  
  digitalWrite(11,HIGH);
 tone ( 10, 294, 400);
  digitalWrite(11,LOW);
    delay (400);
  
  digitalWrite(11,HIGH);
 tone ( 10, 262, 400);
  digitalWrite(11,LOW);
    delay (400);  
    
  }
  
  
  
  
  /**********seconda canzone*************/
  if (digitalRead(A1) == HIGH) {
      
     delay(4000);
  
  digitalWrite(9,HIGH);
  tone(10, 440, 250);
  digitalWrite(9,LOW);
  delay(250);

 digitalWrite(9,HIGH);
 tone(10, 440, 250);
 digitalWrite(9,LOW);
 delay(250);
  
 digitalWrite(9,HIGH);  
 tone(10, 392, 375);
 digitalWrite(9,LOW);
 delay(250);
    
    ///////////////////////////////
    
     digitalWrite(9,HIGH);
tone(10, 440, 125);
  digitalWrite(9,LOW);
  delay(375);

 digitalWrite(9,HIGH);
 tone(10, 440, 125);
   digitalWrite(9,LOW);
  delay(375);
  
digitalWrite(9,HIGH);  
tone(10, 440, 125);
  digitalWrite(9,LOW);
delay(250);
  
digitalWrite(9,HIGH);  
tone(10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
 tone(10, 392, 125);
  digitalWrite(9,LOW);
   delay(250);
  
  digitalWrite(9,HIGH);
 tone(10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
    
//prime due battute
    
  digitalWrite(9,HIGH);
 tone(10, 524, 250);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 524, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 466, 375);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 524, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 524, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
  tone ( 10, 524, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 466, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 466, 125); 
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 466, 125);
  digitalWrite(9,LOW);
  delay(250);
  
 //Fine intro
    
  digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  ////////////////////////////
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 392, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 125); 
  digitalWrite(9,LOW);
  delay(1875);
  
    
  digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  ////////////////////////////
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 392, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 125); 
  digitalWrite(9,LOW);
  delay(1875);
    
     
  digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  ////////////////////////////
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 392, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 125); 
  digitalWrite(9,LOW);
  delay(1875);
  
    
  digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  ////////////////////////////
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 392, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 125); 
  digitalWrite(9,LOW);
   delay(1375);
    
    ////////////Fine strofa////////////////
   
    digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750);
    
    
    digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(1125);
  
  
  
   digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750);
    
    
    digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(1125);
  
  
    
    
    digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750); 
////////////////////////////////    
 digitalWrite(9,HIGH);
tone ( 10, 349, 500); 
  digitalWrite(9,LOW);
   delay(750); 
    
   digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(375);   
    
      digitalWrite(9,HIGH);
tone ( 10, 524, 125); 
  digitalWrite(9,LOW);
   delay(875);   
     
digitalWrite(11,HIGH);
delay(125); 
digitalWrite(11,LOW);
delay(1875);   
     digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  ////////////////////////////
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 392, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 125); 
  digitalWrite(9,LOW);
  delay(1875);
  
    
  digitalWrite(9,HIGH);
 tone(10, 262, 125);
  digitalWrite(9,LOW);
  delay (250); 
  
  digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(250);

  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 392, 250);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 311, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 349, 125);
  digitalWrite(9,LOW);
  delay(375);
  
  digitalWrite(9,HIGH);
tone ( 10, 262, 125); 
  digitalWrite(9,LOW);
  delay(1375);
  
  digitalWrite(9,HIGH);
tone ( 10,262 , 125);
  digitalWrite(9,LOW);
  delay(250);
  
     digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750);
    
    
    digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(1125);
  
  
  
   digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750);
    
    
    digitalWrite(9,HIGH);
tone ( 10, 349, 250);
  digitalWrite(9,LOW);
  delay(1125);
  
  
    
    
    digitalWrite(9,HIGH);
tone ( 10, 262, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
  tone ( 10, 349, 125);
  digitalWrite(9,LOW);
 delay(250);
  
    
  digitalWrite(9,HIGH);
tone ( 10, 392, 125);
  digitalWrite(9,LOW);
  delay(250);
  
  digitalWrite(9,HIGH);
tone ( 10, 415, 500); 
  digitalWrite(9,LOW);
   delay(750); 
////////////////////////////////    
 digitalWrite(9,HIGH);
tone ( 10, 349, 500); 
  digitalWrite(9,LOW);
   delay(750); 
    
   digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(250);   
       digitalWrite(9,HIGH);
tone ( 10, 392, 125); 
  digitalWrite(9,LOW);
   delay(375);   
    
      digitalWrite(9,HIGH);
tone ( 10, 524, 125); 
  digitalWrite(9,LOW);
   delay(875);   
     
digitalWrite(11,HIGH);
delay(125); 
digitalWrite(11,LOW);
delay(1875);   
  
  }
}
 