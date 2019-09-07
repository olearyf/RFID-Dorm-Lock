#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
int servoPin = 9;
Servo servo;
int servoAngle = 0;


#define RST_PIN         9          
#define SS_PIN          10         

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
	Serial.begin(9600);
  servo.attach(servoPin);
	while (!Serial);
	SPI.begin();
	mfrc522.PCD_Init();
	delay(4);
	mfrc522.PCD_DumpVersionToSerial();
	Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
  
}

void loop() {
	if ( ! mfrc522.PICC_IsNewCardPresent()) {
		return;
	}
	if ( ! mfrc522.PICC_ReadCardSerial()) {
		return;
	}
 
  //check Frances ID
  byte myID[] = {0x04, 0x6C, 0x32, 0xD2, 0x6F, 0x5C, 0x80};
  bool isID = true;
  for(int i = 0; i<7; i++){
    if(!(mfrc522.uid.uidByte[i] == myID[i])){
      isID = false;
    }
  }
  
  //check Arya ID
  byte AID[] = {0x04, 0x59, 0x63, 0xA2, 0xC0, 0x62, 0x80};
  bool isAID = true;
  for(int i = 0; i<7; i++){
    if(!(mfrc522.uid.uidByte[i] == AID[i])){
      isAID = false;
    }
  }
  /*for(servoAngle = 89; servoAngle>=0;servoAngle--){
      servo.write(servoAngle);
      delay(10);
    }
  servo.write(90);*/
  
  if(isID || isAID){
    Serial.println("Access Granted!");
    for(servoAngle = 0; servoAngle<90;servoAngle++){
      servo.write(servoAngle);
      delay(10);
    }
    servo.write(90);
    delay(1000);

    //put code to open door lock
    //green light
  }
  else{
    Serial.println("Access Denied");
    //red light?
    for(servoAngle = 89; servoAngle>=0;servoAngle--){
      servo.write(servoAngle);
      delay(10);
    }
    servo.write(90);
    delay(1000);

  }
  //wait 3 seconds between card swipes
  delay(1000);



}
