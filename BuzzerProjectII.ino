#define Buzzer 32
#define Button 27
#define LED 23
hw_timer_t *My_timer = NULL;
int count = 0;
bool statusChange = true;
bool button = true;
// unsigned long time = 1;
// This is the Timer ISR. It is automatically called 
// on a timer alarm event.
void IRAM_ATTR onTimer(){
  digitalWrite(Buzzer, !digitalRead(Buzzer));
}

void IRAM_ATTR IO_INT_ISR()
{
  statusChange = true;
  if(count == 0 && statusChange == true){
    count = 1;
    statusChange = false;
  }else if(count == 1 && statusChange == true){
    count = 2;
    statusChange = false;
  }else if(count == 1 && statusChange == true){
    count = 2;
    statusChange = false;
  }else if(count == 2 && statusChange == true){
    count = 3;
    statusChange = false;
  }else if(count == 3 && statusChange == true){
    count = 4;
    statusChange = false;
  }else if(count == 4 && statusChange == true){
    count = 0;
    statusChange = false;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(LED , OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Button , INPUT);
  My_timer = timerBegin(0, 80, true);  // use tiemr 0 and set prescale to 80 so 1 tick is 1 uSec
  timerAttachInterrupt(My_timer, &onTimer, true); // point to the ISR
  attachInterrupt(Button, IO_INT_ISR, RISING);
}

void loop() {
  Serial.println(count);
  if(count == 0){
    timerAlarmEnable(My_timer);
    timerAlarmWrite(My_timer, 477, true);
    delay(1000);
    timerAlarmWrite(My_timer, 477, true);
    delay(1000);
    timerAlarmWrite(My_timer, 318, true);
    delay(1000);
    timerAlarmWrite(My_timer, 318, true);
    delay(1000);
    timerAlarmWrite(My_timer, 284, true);
    delay(1000);
    timerAlarmWrite(My_timer, 284, true);
    delay(1000);
    timerAlarmWrite(My_timer, 318, true);
    delay(1000);
    timerAlarmWrite(My_timer, 357, true);
    delay(1000);
    timerAlarmWrite(My_timer, 357, true);
    delay(1000);
    timerAlarmWrite(My_timer, 379, true);
    delay(1000);
    timerAlarmWrite(My_timer, 379, true);
    delay(1000);
    timerAlarmWrite(My_timer, 425, true);
    delay(1000);
    timerAlarmWrite(My_timer, 425, true);
    delay(1000);
    timerAlarmWrite(My_timer, 477, true);
    delay(1000);
  }else if(count == 1){
    timerAlarmEnable(My_timer);
    timerAlarmWrite(My_timer, 477, true);
    delay(800);
    timerAlarmWrite(My_timer, 477, true);
    delay(800);
    timerAlarmWrite(My_timer, 318, true);
    delay(800);
    timerAlarmWrite(My_timer, 318, true);
    delay(800);
    timerAlarmWrite(My_timer, 284, true);
    delay(800);
    timerAlarmWrite(My_timer, 284, true);
    delay(800);
    timerAlarmWrite(My_timer, 318, true);
    delay(800);
    timerAlarmWrite(My_timer, 357, true);
    delay(800);
    timerAlarmWrite(My_timer, 357, true);
    delay(800);
    timerAlarmWrite(My_timer, 379, true);
    delay(800);
    timerAlarmWrite(My_timer, 379, true);
    delay(800);
    timerAlarmWrite(My_timer, 425, true);
    delay(800);
    timerAlarmWrite(My_timer, 425, true);
    delay(800);
    timerAlarmWrite(My_timer, 477, true);
    delay(800);
  }else if(count == 2){
    timerAlarmEnable(My_timer);
    timerAlarmWrite(My_timer, 477, true);
    delay(600);
    timerAlarmWrite(My_timer, 477, true);
    delay(600);
    timerAlarmWrite(My_timer, 318, true);
    delay(600);
    timerAlarmWrite(My_timer, 318, true);
    delay(600);
    timerAlarmWrite(My_timer, 284, true);
    delay(600);
    timerAlarmWrite(My_timer, 284, true);
    delay(600);
    timerAlarmWrite(My_timer, 318, true);
    delay(600);
    timerAlarmWrite(My_timer, 357, true);
    delay(600);
    timerAlarmWrite(My_timer, 357, true);
    delay(600);
    timerAlarmWrite(My_timer, 379, true);
    delay(600);
    timerAlarmWrite(My_timer, 379, true);
    delay(600);
    timerAlarmWrite(My_timer, 425, true);
    delay(600);
    timerAlarmWrite(My_timer, 425, true);
    delay(600);
    timerAlarmWrite(My_timer, 477, true);
    delay(600);
  }else if(count == 3){
    timerAlarmEnable(My_timer);
    timerAlarmWrite(My_timer, 477, true);
    delay(400);
    timerAlarmWrite(My_timer, 477, true);
    delay(400);
    timerAlarmWrite(My_timer, 318, true);
    delay(400);
    timerAlarmWrite(My_timer, 318, true);
    delay(400);
    timerAlarmWrite(My_timer, 284, true);
    delay(400);
    timerAlarmWrite(My_timer, 284, true);
    delay(400);
    timerAlarmWrite(My_timer, 318, true);
    delay(400);
    timerAlarmWrite(My_timer, 357, true);
    delay(400);
    timerAlarmWrite(My_timer, 357, true);
    delay(400);
    timerAlarmWrite(My_timer, 379, true);
    delay(400);
    timerAlarmWrite(My_timer, 379, true);
    delay(400);
    timerAlarmWrite(My_timer, 425, true);
    delay(400);
    timerAlarmWrite(My_timer, 425, true);
    delay(400);
    timerAlarmWrite(My_timer, 477, true);
    delay(400);
  }else if(count == 4){
    timerAlarmEnable(My_timer);
    timerAlarmWrite(My_timer, 477, true);
    delay(200);
    timerAlarmWrite(My_timer, 477, true);
    delay(200);
    timerAlarmWrite(My_timer, 318, true);
    delay(200);
    timerAlarmWrite(My_timer, 318, true);
    delay(200);
    timerAlarmWrite(My_timer, 284, true);
    delay(200);
    timerAlarmWrite(My_timer, 284, true);
    delay(200);
    timerAlarmWrite(My_timer, 318, true);
    delay(200);
    timerAlarmWrite(My_timer, 357, true);
    delay(200);
    timerAlarmWrite(My_timer, 357, true);
    delay(200);
    timerAlarmWrite(My_timer, 379, true);
    delay(200);
    timerAlarmWrite(My_timer, 379, true);
    delay(200);
    timerAlarmWrite(My_timer, 425, true);
    delay(200);
    timerAlarmWrite(My_timer, 425, true);
    delay(200);
    timerAlarmWrite(My_timer, 477, true);
    delay(200);
  }
}