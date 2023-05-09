# Simple_opp_inheritance_Cpp
Simple object oriented programing project written in c++ using inheritance.
Program is an implementation of  below script:<br/><br/>

[POLISH ORIGINAL VERSION (NO WARRANTY)]<br/><br/>
UrzadzenieElektryczne<br/>
Napisać definicję klasy UrzadzenieElektryczne reprezentującej dowolne urządzenie elektryczne. Ma ona
następujące właściwości (pola prywatne):<br/>
• marka,<br/>
• stan (czy urządzenie jest włączone, czy wyłączone).<br/>
Klasa ma również posiadać następujące funkcje (metody):<br/>
• konstruktor ustawiający markę zgodnie z podanym parametrem, natomiast stan na wyłączone.<br/>
• metody wlacz() i wylacz(),<br/>
• metody jakaMarka() i jakiStan(),<br/>
• metodę wypisz() wypisującą dane o urządzeniu elektrycznym w jednej z następujących postaci:<br/>
– <marka> jest wyłączony, jeśli urządzenie jest wyłączone,<br/>
– <marka> jest włączony, jeśli urządzenie jest włączone.<br/>
Napisać definicję klasy TV reprezentującej telewizor dziedziczącej po klasie UrzadzenieElektryczne. Ma
ona posiadać następujące właściwości (pola prywatne):<br/>
• kanal (liczba całkowita od 1 do 40),<br/>
• glosnosc (liczba całkowita od 0 do 10).<br/>
Klasa ma również posiadać następujące funkcje (metody):<br/>
• konstruktor ustawiający markę zgodnie z podanym parametrem, stan na wyłączony, a pozostałe właściwości
na wartości minimalne,<br/>
• metody podglosnij() i scisz() zmieniające głośność o 1 w górę lub w dół, o ile to możliwe i tylko gdy
telewizor jest włączony,<br/>
• metodę zmienKanal() zmieniającą kanal na podany jako argument (o ile to możliwe), jeśli telewizor jest
wyłączony, to go włącza,<br/>
• metodę wypisz() wypisującą dane o telewizorze w jednej z następujących postaci:<br/>
– <marka> jest wyłączony, jeśli telewizor jest wyłączony,<br/>
– <marka> jest włączony na kanale <kanal> (głośność <glosnosc>), jeśli jest włączony.<br/>
Wszystkie możliwe metody w obu klasach mają być stałe (const).<br/>
W funkcji main():<br/>
• utworzyć nowy obiekt u1 klasy UrzadzenieElektryczne marki LG, wypisać informacje o u1, włączyć
urządzenie u1, ponownie wypisać informacje o urządzeniu, wyświetlić za pomocą odpowiednich metod jaki jest
stan i marka urządzenia u1,<br/>
• utworzyć nowy obiekt tv1 klasy TV marki Samsung, który jest od razu włączony, wypisać informacje o tv1,
podjąć próbę zmiany kanału na 50, podgłośnić, wypisać informacje o tv1, dwukrotnie ściszyć, wypisać
informacje o urządzeniu, wyłączyć i ponownie wypisać informacje o tv1,<br/>
• utworzyć nowy obiekt tv2 klasy TV marki Philips, wypisać informacje o tv2, włączyć i ponownie wypisać
informacje o tv2,<br/>
• za pomocą utworzonego wskaźnika do obiektu UrzadzenieElektryczne o nazwie u2 wywołać metody
wypisz() i wylacz() dla obiektu tv2.<br/>

  <br/>
  
[AUTO TRANSLATED ENGLISH VERSION]<br/><br/>
ElectricalDevice<br/>
Write a definition of the ElectricalDevice class representing any electrical device. It has the following properties (private fields):<br/>
• brand,<br/>
• state (whether the device is on or off).<br/>
The class should also have the following functions (methods):<br/>
• a constructor setting the brand according to the given parameter and the state to off.<br/>
• methods wlacz() (turn_on()) and wylacz() (turn_off()),<br/>
• methods jakaMarka() (getBrand()) and jakiStan() (getState()),<br/>
• a method wypisz() (print_info()) that prints information about the electrical device in one of the following forms:<br/>
– <brand> is off if the device is off,<br/>
– <brand> is on if the device is on.<br/>
Write a definition of the TV class representing a television, which inherits from the ElectricalDevice class. It has the following properties (private fields):<br/>
• kanal (channel) (an integer from 1 to 40),<br/>
• glosnosc (volume) (an integer from 0 to 10).<br/>
The class should also have the following functions (methods):<br/>
• a constructor setting the brand according to the given parameter, the state to off, and the remaining properties to their minimum values,<br/>
• methods podglosnij() (increaseVolume()) and scisz() (decreaseVolume()) that increase or decrease the volume by 1, if possible and only when the TV is on,<br/>
• a method zmienKanal() (changeChannel()) that changes the channel to the one specified as an argument (if possible), and if the TV is off, it turns it on,<br/>
• a method wypisz() (print_info()) that prints information about the television in one of the following forms:<br/>
– <brand> is off if the TV is off,<br/>
– <brand> is on on channel <channel> (volume <volume>), if the TV is on.<br/>
All possible methods in both classes should be constant (const).<br/>
In the main() function:<br/>
• create a new object u1 of the ElectricalDevice class with the brand LG, print information about u1, turn on u1, print information about the device again, display the state and brand of u1 using the appropriate methods,<br/>
• create a new object tv1 of the TV class with the brand Samsung, which is immediately turned on, print information about tv1, attempt to change the channel to 50, increase the volume, print information about tv1, decrease the volume twice, print information about the device, turn it off, and print information about tv1 again,<br/>
• create a new object tv2 of the TV class with the brand Philips, print information about tv2, turn it on, and print information about tv2 again,<br/>
• using the created pointer to the ElectricalDevice object named u2, call the wypisz() (print_info()) and wylacz() (turn_off()) methods for the tv2 object.  <br/>
 
