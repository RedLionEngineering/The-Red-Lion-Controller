/*
 * This is the Code for the Red Lion Pro Controller. The code is written on 
 * Arduino IDE 1.8.3 and uses the ATtinyCore by Spence Konte for programming. 
 * The settings are: 
 * * No Bootloader 
 * * New Style pin mapping
 * * ATtiny167 microcontroller
 * * LTO disabled
 * The fuse settings of the microcontroller are:
 * * SELFPRGEN 1
 * * RSTDISBL 1
 * * DWEN 1
 * * SPIEN 0
 * * WDTON 1
 * * EESAVE 0
 * * BODLEVEL2 1
 * * BODLEVEL1 1
 * * BODLEVEL0 1
 * * CKDIV8 1
 * * CKOUT 1
 * * SUT1 1
 * * SUT0 0
 * * CKSEL3 0
 * * CKSEL2 0
 * * CKSEL1 1
 * * CKSEL0 0
 * Functions:
 * setup()
 * voltage()
 * display()
 * callupDigit1()
 * callupDigit2()
 * callupDigit3()
 * checkTemp()
 * loop()
 */

// Beginning of code

// Definitions
#define volt A0  // pin 1
#define temp A1  // pin 2
#define fan 3    // pin 4
#define dig1 7   // pin 8
#define dig2 6   // pin 9
#define dig3 5   // pin 10
#define segB 4   // pin 7
#define segG 14  // pin 12
#define segC 13  // pin 13
#define segDP 12 // pin 14
#define segF 11  // pin 17
#define segD 10  // pin 18
#define segA 9   // pin 19
#define segE 8   // pin 20

// Setup function (runs once on startup)
void setup() {
  // Pin Modes
  pinMode(dig1, OUTPUT);
  pinMode(dig2, OUTPUT);
  pinMode(dig3, OUTPUT);
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
  pinMode(volt, INPUT);
  pinMode(temp, INPUT);
  pinMode(fan, OUTPUT);

  // Startup Sequence
  digitalWrite(segG, HIGH);
  digitalWrite(dig1, HIGH);
  digitalWrite(dig2, HIGH);
  digitalWrite(dig3, HIGH);
  digitalWrite(fan, HIGH);
  delay(1000);
  digitalWrite(dig1, LOW);
  digitalWrite(dig2, LOW);
  digitalWrite(dig3, LOW);
  digitalWrite(fan, LOW);
  delay(250);
}

// Voltage Read Function
int voltage() {
  /*measures the voltage on pin A0 and returns a float value from 0 to 30. Meant 
  for a voltage divider factor 6 on the input. */
  int input=analogRead(volt);
  float voltage=(input /20.48)*6;
  return voltage;
}

// Display digit function
void display(int digit) {
  /*Takes a single digit int and sets the according segments of the display*/
  switch (digit) {
    case 0:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
    break;

    case 1:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;

    case 2:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
    break;

    case 3:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
    break;

    case 4:
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;

    case 5:
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;

    case 6:
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;

    case 7:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    break;

    case 8:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;

    case 9:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;
  }
}

// Call up Digit 1
void callupDigit1(int y) {
  digitalWrite(dig1,LOW);
  digitalWrite(dig2,LOW);
  digitalWrite(dig3,LOW);
  digitalWrite(segDP,LOW);
  display(y);
  digitalWrite(dig1,HIGH);
  digitalWrite(segDP,HIGH);
}

// Call up Digit 2
void callupDigit2(int y) {
  digitalWrite(dig1,LOW);
  digitalWrite(dig2,LOW);
  digitalWrite(dig3,LOW);
  digitalWrite(segDP,LOW);
  display(y);
  digitalWrite(dig2,HIGH);
  digitalWrite(segDP,LOW);
}

// Call up Digit 3
void callupDigit3(int y) {
  digitalWrite(dig1,LOW);
  digitalWrite(dig2,LOW);
  digitalWrite(dig3,LOW);
  digitalWrite(segDP,LOW);
  display(y);
  digitalWrite(dig3,HIGH);
  digitalWrite(segDP,HIGH);
}

// Check Temperature and Switch Fan Function
void checkTemp() {
  int read = analogRead(temp);
  if (read >= 711) {
    digitalWrite(fan, HIGH);
  }
  else if (read <= 518) {
    digitalWrite(fan, LOW);
  }
}

// Loop Function (runs repeatedly after the setup until powerdown
void loop() {
  checkTemp();
  int x = voltage();
  int y3 = x%10;
  x = x/10;
  int y2 = x%10;
  x=x/10;
  int y1 = x;
  for (int i=0; i<35; i++) {
    callupDigit3(y3);
    delay(6);
    callupDigit2(y2);
    delay(6);
    callupDigit1(y1);
    delay(6);
  }
}

//end of code
