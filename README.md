# MDriver
Библиотека MDriver.
Библиотека MDrive предназначена для управление коллекторными двигателями
посредством драйвера двигателе на микросхеме L293 или L298.

Библиотека содержит следующие функции:
speed(uint8_t speed); - принимает значение от 0 до 255, также принимает
  константу MAX, что соответствует значению 255. Управляет 
  скоростью вращения. Неактивна если двигатель инициализирован без регулировки
  скорости.
forward(); и backward(); - управляют вращением двигателя в разных 
  направлениях
stop(); - остановка двигателя

# MDriver
Library MDriver.
Library MDrive is designed to control brushed motors
by the driver the engine on the chip L293 or L298.

The library contains the following functions:
speed(uint8_t speed); - takes the value from 0 to 255, also takes
the constant MAX, which corresponds to the value 255. Controls 
the speed of rotation. Inactive when the engine is initialized without adjustment
speed.
forward(); backward(); - control the rotation of the motor in different 
directions
stop(); - engine stop
