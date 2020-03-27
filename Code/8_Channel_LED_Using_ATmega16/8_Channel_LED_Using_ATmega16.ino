                      ////////////////////////
                     ////Tony////////////////
                    ///////Tech/////////////
                   ///////////1220/////////
                  ////////////////////////
    
                    
                  #include <IRremote.h>
                  int IRPIN = 2;


                  int state8  = 0;
                  int state9  = 0;
                  int state10 = 0;
                  int state11 = 0;
                  int state12 = 0;
                  int state13 = 0;
                  int state14 = 0;
                  int state15 = 0;


                  IRrecv irrecv(IRPIN);
                  decode_results result;
  
                  void setup()
                      {
                        pinMode(8,  OUTPUT);
                        pinMode(9,  OUTPUT);
                        pinMode(10, OUTPUT);
                        pinMode(11, OUTPUT);
                        pinMode(12, OUTPUT);
                        pinMode(13, OUTPUT);
                        pinMode(14, OUTPUT);
                        pinMode(15, OUTPUT);

                        irrecv.enableIRIn();
                       } 

                  void loop() 
                      {
                       if (irrecv.decode(&result)) 
                          
                          { 
                           if (result.value == 0x40BF30CF)
                          
                              {
                               state8 = ~state8;
                               digitalWrite(8,state8);
                               delay(250);
                              }

                           if (result.value == 0x40BF18E7)
                              {
                               state9 = ~state9;
                               digitalWrite(9,state9);
                               delay(250);
                              }

                           if(result.value == 0x40BF7A85)
                             {
                              state10 = ~state10;
                              digitalWrite(10,state10);
                              delay(250);
                             }

                           if(result.value == 0x40BF10EF)
                             {
                              state11 = ~state11;
                              digitalWrite(11,state11);
                              delay(250);
                             }

                           if(result.value == 0x40BF38C7)
                             {
                              state12 = ~state12;
                              digitalWrite(12,state12);
                              delay(250);
                             }

                           if(result.value == 0x40BF5AA5)
                             {
                              state13 = ~state13;
                              digitalWrite(13,state13);
                              delay(250);
                             }

                           if(result.value == 0x40BF42BD)
                             {
                              state14 = ~state14;
                              digitalWrite(14,state14);
                              delay(250);
                             }

                           if(result.value == 0x40BF4AB5)
                             {
                              state15 = ~state15;
                              digitalWrite(15,state15);
                              delay(250);
                             }

                           if(result.value == 0x40BFB04F)
                              {
                               digitalWrite(15,LOW);
                               digitalWrite(14,LOW);
                               digitalWrite(13,LOW);
                               digitalWrite(12,LOW);
                               digitalWrite(11,LOW);
                               digitalWrite(10,LOW);
                               digitalWrite(9,LOW);
                               digitalWrite(8,LOW);
                               delay(250);
                               }

                          if(result.value == 0x40BF629D)
                            {
                               digitalWrite(15,HIGH);
                               digitalWrite(14,HIGH);
                               digitalWrite(13,HIGH);
                               digitalWrite(12,HIGH);
                               digitalWrite(11,HIGH);
                               digitalWrite(10,HIGH);
                               digitalWrite(9,HIGH);
                               digitalWrite(8,HIGH);
                               delay(250);
                               }
      
      
                           }
                        irrecv.resume(); 
                        delay(500);
                       }
