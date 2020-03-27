                      ////////////////////////
                     ////Tony////////////////
                    ///////Tech/////////////
                   ///////////1220/////////
                  ////////////////////////
    
                    
                 #include <IRremote.h>
                 int IRpin = 2;
                 IRrecv irrecv(IRpin);
                 decode_results results;

                 void setup()
                      {
                        Serial.begin(9600);
                        irrecv.enableIRIn(); 
                      }  


                 void loop() 

                      {   
          
                      if (irrecv.decode(&results)) 
                         {
                          Serial.println(results.value,HEX);
                          delay(10);
                          irrecv.resume();   
                         }
                      
                      }    
