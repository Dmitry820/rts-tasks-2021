#include <TaskManagerIO.h>
#define pin1 3
#define pin2 5
#define pin3 6
#define pin4 9
#define pin5 10
#define pin6 11


const long interval1 = 2000;
const long interval2 = 200;
const long interval3 = 300000;
const long interval4 = 700000;
const long interval5 = 1000000;
const long interval6 = 5000;

int state1 = LOW;
int state2 = LOW;
int state3 = LOW;
int state4 = LOW;
int state5 = LOW;
int state6 = LOW;


void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);

  taskid_t pinta1 = taskManager.scheduleFixedRate(interval1, [] {
    if (state1 == LOW) {
      state1 = HIGH;
    } else{
      state1 = LOW;
    }
    digitalWrite(pin1, state1
                );
  }, TIME_MICROS);

  taskid_t pinta2 = taskManager.scheduleFixedRate(interval2, [] {
    if (state2 == LOW) {
      state2 = HIGH;
    } else{
      state2 = LOW;
    }
    digitalWrite(pin2, state2);
  }, TIME_MICROS);

  taskid_t pinta3 = taskManager.scheduleFixedRate(interval3, [] {
    if (state3 == LOW) {
      state3 = HIGH;
    } else{
      state3 = LOW;
    }
    digitalWrite(pin3, state3);
  }, TIME_MICROS);

  taskid_t pinta4 = taskManager.scheduleFixedRate(interval4, [] {
    if (state4 == LOW) {
      state4 = HIGH;
    } else{
      state4 = LOW;
    }
    digitalWrite(pin4, state4);
  }, TIME_MICROS);

  taskid_t pinta5 = taskManager.scheduleFixedRate(interval5, [] {
    if (state5 == LOW) {
      state5 = HIGH;
    } else{
      state5 = LOW;
    }
    digitalWrite(pin5, state5);
  }, TIME_MICROS);

  taskid_t pinta6 = taskManager.scheduleFixedRate(interval6, [] {
    if (state6 == LOW) {
      state6 = HIGH;
    } else{
      state6 = LOW;
    }
    digitalWrite(pin6, state6);
  }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}
