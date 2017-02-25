byte releP2 = 2;//Реле K1 --- пин 2
byte releP3 = 3;//Реле K2 --- пин 3
byte releP4 = 4;//Реле K2 --- пин 4

byte releP5 = 5;//Реле K2 --- пин 5
byte releP6 = 6;//Реле K2 --- пин 6
byte releP7 = 7;//Реле K2 --- пин 7
byte releP8 = 8;//Реле K2 --- пин 8
byte releP9 = 9;//Реле K2 --- пин 9

byte spkr = 13;//Спикер --- пин 13

byte pirPin = 10;//Датчик движения --- пин 10

byte releP2status = 0;
byte releP3status = 0;
byte releP4status = 0;
byte releP5status = 0;
byte releP6status = 0;
byte releP7status = 0;
byte releP8status = 0;
byte releP9status = 0;

byte sign = 0;

byte minSecsBetweenCommands = 5; // 5 sec
long lastSend = -minSecsBetweenCommands * 1000;

void setup()
{

  Serial.begin(9600);
  pinMode(pirPin, INPUT);

  pinMode(releP2, OUTPUT);
  pinMode(releP3, OUTPUT);
  pinMode(releP4, OUTPUT);
  pinMode(releP5, OUTPUT);
  pinMode(releP6, OUTPUT);
  pinMode(releP7, OUTPUT);
  pinMode(releP8, OUTPUT);
  pinMode(releP9, OUTPUT);


  //при старте, выключить реле.
  digitalWrite(releP2, HIGH);
  digitalWrite(releP3, HIGH);//HIGH --- off, LOW --- on
  digitalWrite(releP4, HIGH);
  digitalWrite(releP5, HIGH);
  digitalWrite(releP6, HIGH);
  digitalWrite(releP7, HIGH);
  digitalWrite(releP8, HIGH);
  digitalWrite(releP9, HIGH);

}
void(* resetFunc) (void) = 0;//объявляем функцию reset с адресом 0
void loop()
{

  if (Serial.available())
  {

    char val = Serial.read();

    switch (val) {
      //STATUS
      case 'y':
        tone(spkr, 400, 1000);
        Serial.print(releP2status);
        Serial.print(releP3status);
        Serial.print(releP4status);
        Serial.print(releP5status);
        Serial.print(releP6status);
        Serial.print(releP7status);
        Serial.print(releP8status);
        Serial.print(releP9status);
        break;

      case 'w':
        while (true) {
          long now = millis();

          if (digitalRead(pirPin) == HIGH) {

            if (now > (lastSend + minSecsBetweenCommands * 1000)) {
              //tone(spkr, 400, 1000);
              Serial.print("w");

              for (int i = 0; i < 5; i++) {
                tone(spkr, 400, 200);
                //digitalWrite(releP2, LOW);
                digitalWrite(releP4, LOW);
                digitalWrite(releP5, LOW);
                digitalWrite(releP6, LOW);
                delay(300);
                //digitalWrite(releP2, HIGH);
                digitalWrite(releP4, HIGH);
                digitalWrite(releP5, HIGH);
                digitalWrite(releP6, HIGH);
                delay(300);
                digitalWrite(releP2, LOW);
                digitalWrite(releP3, LOW);
                digitalWrite(releP4, LOW);
                digitalWrite(releP6, LOW);
                delay(300);
                digitalWrite(releP2, HIGH);
                digitalWrite(releP3, HIGH);
                digitalWrite(releP4, HIGH);
                digitalWrite(releP6, HIGH);
                delay(300);
              }
              lastSend = now;
              break;
            }

          }
          delay(500);
        }

      case 'x':
        resetFunc();
        break;

      //ON
      case 'a':
        digitalWrite(releP2, LOW);
        tone(spkr, 400, 100);
        releP2status = 1;
        //Serial.println("RP2on");
        break;
      //ON2
      case 'c':
        digitalWrite(releP3, LOW);
        tone(spkr, 400, 100);
        releP3status = 1;
        //Serial.println("RP3on");
        break;
      //ON3
      case 'e':
        digitalWrite(releP4, LOW);
        tone(spkr, 400, 100);
        releP4status = 1;
        //Serial.println("RP4on");
        break;
      //ON4
      case 'g':
        digitalWrite(releP5, LOW);
        tone(spkr, 400, 100);
        releP5status = 1;
        //Serial.println("RP5on");
        break;
      //ON5
      case 'i':
        digitalWrite(releP6, LOW);
        tone(spkr, 400, 100);
        releP6status = 1;
        //Serial.println("RP6on");
        break;
      //ON6
      case 'k':
        digitalWrite(releP7, LOW);
        tone(spkr, 400, 100);
        releP7status = 1;
        //Serial.println("RP7on");
        break;
      //ON7
      case 'm':
        digitalWrite(releP8, LOW);
        tone(spkr, 400, 100);
        releP8status = 1;
        //Serial.println("RP8on");
        break;
      //ON8
      case 'o':
        digitalWrite(releP9, LOW);
        tone(spkr, 400, 100);
        releP9status = 1;
        //Serial.println("RP9on");
        break;
      //ON9
      // Auto Servo_ON
      case 'q':
        digitalWrite(releP9, LOW);
        digitalWrite(releP7, LOW);

        //tone(spkr, 400, 100);
        delay (200);

        digitalWrite(releP9, HIGH);
        digitalWrite(releP7, HIGH);
        break;

      //OFF
      case 'b':
        digitalWrite(releP2, HIGH);
        tone(spkr, 200, 100);
        releP2status = 0;
        //Serial.println("RP2off");
        break;
      //OFF2
      case 'd':
        digitalWrite(releP3, HIGH);
        tone(spkr, 200, 100);
        releP3status = 0;
        //Serial.println("RP3off");
        break;
      //OFF3
      case 'f':
        digitalWrite(releP4, HIGH);
        tone(spkr, 200, 100);
        releP4status = 0;
        //Serial.println("RP4off");
        break;

      //OFF4
      case 'h':
        digitalWrite(releP5, HIGH);
        tone(spkr, 200, 100);
        releP5status = 0;
        //Serial.println("RP5off");
        break;

      //OFF5
      case 'j':
        digitalWrite(releP6, HIGH);
        tone(spkr, 200, 100);
        releP6status = 0;
        //Serial.println("RP6off");
        break;
      //OFF6
      case 'l':
        digitalWrite(releP7, HIGH);
        tone(spkr, 200, 100);
        releP7status = 0;
        //Serial.println("RP7off");
        break;
      //OFF7
      case 'n':
        digitalWrite(releP8, HIGH);
        tone(spkr, 200, 100);
        releP8status = 0;
        //Serial.println("RP8off");
        break;
      //OFF8
      case 'p':
        digitalWrite(releP9, HIGH);
        tone(spkr, 200, 100);
        releP9status = 0;
        //Serial.println("RP9off");
        break;
      //OFF9
      // Auto Servo_Off
      case 'r':
        digitalWrite(releP8, LOW);
        //tone(spkr, 400, 100);
        delay (200);
        digitalWrite(releP8, HIGH);
        break;

      //Левое значение
      default:
        Serial.print("err");
        tone(spkr, 400, 700);
        delay(200);
        tone(spkr, 200, 50);
    }
  }
}
