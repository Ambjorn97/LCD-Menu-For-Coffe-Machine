#include <Adafruit_LiquidCrystal.h>


const int buttonUp = 2;
const int buttonDown = 4;
const int buttonOk = 7;
int cursor = 1;

String option1 = "AMERICANO";
String option2 = "CAPPUCCINO";
String option3 = "LATTE";
String option4 = "ESPRESSO";

Adafruit_LiquidCrystal lcd(0);

void setup() {
  pinMode(buttonUp, INPUT_PULLUP);
  pinMode(buttonDown, INPUT_PULLUP);
  pinMode(buttonOk, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.setBacklight(1);
 
  
}

void loop() {
  
  int buttonUpState = digitalRead(buttonUp);
  int buttonDownState = digitalRead(buttonDown);
  int buttonOkState = digitalRead(buttonOk);

   if (buttonDownState == LOW) {
     
    delay(100);
    cursor++;
    
  } else if (buttonUpState == LOW) {
     delay(100);
     cursor--;
   
  }
  
  
  if(cursor == 1) {
    lcd.setCursor(4, 0);
    lcd.print(option1);
    lcd.setCursor(4, 1);
    lcd.print(option2);
    lcd.setCursor(3, 1);
    lcd.print(" ");
    lcd.setCursor(3, 0);
    lcd.print(">");
  }
  
  if(cursor == 2) {

    lcd.setCursor(4, 0);
    lcd.print(option1);
    lcd.setCursor(4, 1);
    lcd.print(option2);
    lcd.setCursor(3, 0);
    lcd.print(" ");
    lcd.setCursor(3, 1);
    lcd.print(">");
  }
  
  if(cursor == 3) {

    lcd.setCursor(3, 1);
    lcd.print(" ");
    lcd.setCursor(9, 0);
    lcd.print("    ");
    lcd.setCursor(12, 1);
    lcd.print("    ");
    lcd.setCursor(4, 0);
    lcd.print(option3);
    lcd.setCursor(4, 1);
    lcd.print(option4);
    lcd.setCursor(3, 0);
    lcd.print(">");
  }
  
  if(cursor == 4){

    lcd.setCursor(9, 0);
    lcd.print("    ");
    lcd.setCursor(12, 1);
    lcd.print("    ");
    lcd.setCursor(4, 0);
    lcd.print(option3);
    lcd.setCursor(4, 1);
    lcd.print(option4);
    lcd.setCursor(3, 0);
    lcd.print(" ");
    lcd.setCursor(3, 1);
    lcd.print(">");
  }
  
  if(cursor > 4) {

    cursor = 1;

  }
  
  if(cursor < 1){

    cursor = 4;

  }

}
