// TrippleX.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "TrippleX.h"
#include <time.h>


void playerDif(int dif) {
    srand(time(NULL));
     const  int a = rand() % dif + dif;
     const  int b = rand() % dif + dif;
     const  int c = rand() % dif + dif;

     const int SumA = a+b+c;
     const int MulA = a * b * c;

     int answer;
     int Hmula = 1;
     int Hsuma = 0;
     

     std::cout << "Начать новую игру с уровнем " << dif << std::endl;
     std::cout << "Сумма 3 чисел =" << SumA << std::endl;
     std::cout << "Умножение 3 чисел =" << MulA << std::endl;
     std::cout << "Введите 3 числа " << std::endl;

     while (std::cin >> answer) {
         Hmula *= answer;
         Hsuma += answer;
     }
     if ((Hmula == MulA) && (Hsuma == SumA)) {
         std::cout << "Good job bro :3 next level is here " <<std::endl ;
     }
     else {
         std::cout << "YOU ARE *DEAD* " << std::endl;
     }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int MAX_DIFF = 10;
    int dif = 1;

    while (dif <= MAX_DIFF) {
        playerDif(dif);
        std::cin.clear();
        std::cin.ignore();
        dif++;
    }

   /* int a;
    std::cout << "Hello World!\n";
    std::cin >>  a ;
    std::cout << a;*/
}
