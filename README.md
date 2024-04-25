# ARDUINO-CANTERINO
<p align = "center">
 <b>Scopo Progetto:</b> Convertire le note di due canzoni, famose, in frequenze per farle suonare su commando da arduino il tutto facendo andare a tempo di musica i diversi Led.  
</p>

---

                           
	      *****************************************
             Frequenze per le note rilevate
	      *****************************************
     Freq.Note             Durata Ritmica 
    DO  --> 262   (Diferisce a seconda del tipo di nota) 
    RE  --> 294                    |
    MI  --> 330          	       | 	 
    FA  --> 349                    V 
    SOL --> 392                  1200    
    LA  --> 440		      800
    SI  --> 494		      600
    DO  --> 524		      400
    RE  --> 588		      300
    RE# --> 311		      200
    SOL#--> 415                   150
                                  100
                                  
    _N.B___________________________________________________________________________________                             
      - Ogni nota la strutturo mettendo il comando 'tone(buzzer,freq,durata);'
      - Le pause le metto unite al deley che divide ogni nota aumentando tale lavoro
        di 200 'delay(N+200)'
      - I due tasti avviano le due diverse canzoni  

---
<H2> ''CIRCUITO'' :
<img src="https://github.com/Perro2110/ARDUINO-CANTERINO/blob/main/Arduino%20Canterino%20.png"> 
