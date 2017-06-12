#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <clocale>

using namespace std;

class instrument {
protected:
  char type[20];
  char name[20];
public:
  instrument(){
      fflush(stdin);
      cout << "¬ведите тип инструмента: ";
      gets(type);
      cout << "¬ведите им€ инструмента: ";
      gets(name);
   }
  void get_type(){cout << type;}
  void get_name(){cout << name;}
 };

class percussion : public instrument {
    int diametr;
public:
  percussion(){
      cout << "¬ведите диаметр ударного инструмента: ";
      cin >> diametr;
     }
  int get_diametr(){return diametr;}

 };

class wind : public instrument {
    int buttons;
public:
 wind(){
     fflush(stdin);
     cout << "¬ведите кол-во кнопок: ";
     cin >> buttons;
     }
 int get_buttons(){return buttons;}
 };

class stringed : public instrument {
    int num;
public:
  stringed(){
     fflush(stdin);
     cout << "¬ведите кол-во струн: ";
     cin >> num;
  }
  int get_num(){return num;}
 };

int main()
{
    setlocale(LC_ALL,"russian");
    percussion baraban;
    wind dudec;
    instrument mass[] = {baraban, dudec};
    cout << mass[0].get_diametr();
//    baraban.get_name();
//    dudec.get_name();
    return 0;
}
