                      ////////////////////////
                     ////Tony////////////////
                    ///////Tech/////////////
                   ///////////1220/////////
                  ////////////////////////
    
                    
                  #include <IRremote.h>
                  int IRPIN = 2;
                  int state  = 0;
                  IRrecv irrecv(IRPIN);
                  decode_results result;

                  void setup()
                       {
          
                        pinMode(13, OUTPUT);
                        irrecv.enableIRIn();
                       
                       }

                  void loop() 
                       {
                        if (irrecv.decode(&result)) 
                           { 
                            if(result.value == 0x40BF30CF)
                              {
                               state = ~state;
                               digitalWrite(13,state);
                               delay(250);
                              }
                           }
                         irrecv.resume(); 
                         delay(500);
                        }
