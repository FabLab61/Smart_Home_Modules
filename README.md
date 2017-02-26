# Smart_Home

[![Smart|Home](http://connect.rgkiu.ru/logo.png)](http://it.rgkiu.ru/)
> Программа управления домом создана на основе приложений MIT App Invertor и Arduino, которые позволяют предельно незамысловато реализовать решения любой сложности. Всю физику обеспечивают реле-модули, устанавливаемые в необходимых точках помещения – выключателях, дверцах, кнопках. Эти реле сопряжены с Bluetooth-модулем связи. Систему можно конфигурировать так же Wi-Fi модулем, что по стоимости то же самое, что Bluetooth. Но с помощью технологии Wi-Fi предоставляется возможность управлять домом удаленно, например с работы или в отпуске. А совсем искушенным в удаленном управлении, можно предложить добавить модуль GSM/GPRS. Даже когда нету доступа к интернету, у Вас будет возможность контролировать ситуации дома. На данном этапе, сигнал с устройства управления передается по Bluetooth, приводя в движение то или иное реле. Все это работает на макете, но способно действовать и в реальном доме. Таким образом можно заставить подчиняться нужным сигналам любые домашние системы: от включения торшера и открывания шкафа до всевозможных интеллектуальных хитростей. Например – снабдить доступ в гараж датчиком алкоголя, который не даст вам сесть за руль нетрезвым, вовремя заблокировав дверь.


## Система Smart_Home на данном этапе "умеет":

  - Включение потолочного освещения
  - Включение освещения пола
  - Включение освещения, посредством торшера
  - Взаимодействие со шкафом
  - Взаимодействие со стиральной машиной
  - Взаимодействие с телевизором
  - Включение режима охраны

## Стоимость
>Приобрести базовую составляющую для управления домом можно как в Вашем городе проживания, так и с помощью китайских магазинов, но в последнем случае придется подождать чуть больше месяца.

#### Общая стоимость базовой конструкции в России составляет 1500 рублей!

| Деталь | Стоимость |
| ------ | ------ |
| Контроллер Arduino Nano|[360 Р](http://xn----7sbhgu4ahbanfnng.xn--p1ai/product/arduino-nano-v3-0/)|
| Bluetooth модуль HC-06 | [440 Р](http://xn----7sbhgu4ahbanfnng.xn--p1ai/product/bluetooth-%D0%BC%D0%BE%D0%B4%D1%83%D0%BB%D1%8C-hc-06/) |
| Модуль релейный 8-канальный | [650 Р](http://xn----7sbhgu4ahbanfnng.xn--p1ai/product/%D0%BC%D0%BE%D0%B4%D1%83%D0%BB%D1%8C-%D1%80%D0%B5%D0%BB%D0%B5%D0%B9%D0%BD%D1%8B%D0%B9-8-%D0%BA%D0%B0%D0%BD%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9/) |
| Итого|1450 Р|

>Для примера взят магазин "Ардуино-Ростов", филиал которого базируется в магазине "1000 радиодеталей", который не раз доказывал надежность и повышенную отказоустойчивость наших заказов. 
 
#### Общая стоимость базовой конструкции в Китае составляет 650 рублей!

| Деталь | Стоимость |
| ------ | ------ |
| Контроллер Arduino Nano|150 Р|
| Bluetooth модуль HC-06 | 200 Р |
| Модуль релейный 8-канальный | 300 Р|
| Итого|650 Р|
  - Для примера взяты магазины проверенных продавцов с Aliexpress с бесплатной и своевременной доставкой.


>В итоге мы видим разницу чуть больше, чем в два раза, или если проще говоря, общая стоимость всех деталей в Китае равна одному модулю в России.

## Разработка
Разработка была произведена в двух направлениях. 

1. Программа для контроллера Arduino. Программа была написана на языке высокого уровня -- C++
Так же есть возможность программировать Arduino с помощью "Google Blocly"-подобных систем, что предоставляет, может и не так гибко, но быстро и не обладая большим "багажом знаний", построить необходимый функционал Вашего Умного дома
2. Программа для управления контроллером Arduino, посредством "гаджета в кармане", была реализована с помощью сервиса-IDE MIT App Inventor 2

Этот подход к разработке мобильных приложений имеет ряд неоспоримых плюсов:
  - Моментальная разработка, требуется только понимания алгоритма действия будущей программы
  - Простой синтаксис. Создание программы производится с помощью построения блоков, логической части программы
  - Хорошая поддержка завершенного проекта. Каждый, кто захотел бы попробовать себя в разработке системы "Умный дом", сможет без труда воссоздать всю идею и добавить новые элементы и функции, которые ему необходимы




