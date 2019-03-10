unsigned long timeNow = 0;
unsigned long alarm = 10;

int minute = 10;
int hour = 9;
int clearAlarm = 11;

int addMin = 0;
int addHour = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(clearAlarm, INPUT);
  pinMode(minute, INPUT);
  pinMode(hour, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  timeNow = (millis()/1000);
  Serial.println(timeNow);
  if (timeNow == alarm){
    Serial.println("Wake up");
  }
  delay(999);
  
  addMin = digitalRead(minute);
  addHour = digitalRead(hour);

  
  if(addMin = HIGH){
    alarm = (alarm + 60000)/1000;
  }
  if(addHour == HIGH){
    alarm = (alarm + 3600000)/1000;
  }
 
  
  
}
