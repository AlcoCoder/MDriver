#include "MDriver.h"

/*
 *Этот пример управляет двигателями без ШИМ(PWM) сигнала, при этом на пины
 *ENA и ENB на плате драйвера двигателей подтянуты к высокому логическому уровню (+5V).
 *
 * Библиотека MDrive предназначена для управление коллекторными двигателями
 * посредством драйвера двигателей на микросхеме L293 или L298.
 * 
 * В данном примере выходы драйвера двигателей подключены к следующим
 * цифровым пинам Arduino: 
 * 1) для первого двигателя:*/
#define IN1 2
#define IN2 4
  //2) для второго двигателя:
#define IN3 6
#define IN4 7

/* 
 * Библиотека содержит следующие функции:
 * speed(uint8_t speed); - принимает значение от 0 до 255, также принимает
 *  константу MAX, что соответствует значению 255. Управляет 
 *  скоростью вращения. Если двигатель инициализирован без регулировки
 *  скорости, то эта функция становится неактивной.
 * forward(); и backward(); - управляют вращением двигателя в разных 
 *  направлениях
 * stop(); - остановка двигателя
 */
 
//Подключение двигателей без регулировки скорости, 
//подразумевается что пин EN на плате драйвера подтянут к +5V.
//Конструктор принимает следующие аргументы MDrive(IN1, IN2) 
MDriver m1(IN1, IN2);
MDriver m2(IN3, IN4);

void setup(){}

void loop()
{
  m1.forward();
  m2.backward();
  delay(1000);
  
  m1.stop();
  m2.stop();
  delay(100);
  
  m1.backward();
  m2.forward();
  delay(1000);
}
