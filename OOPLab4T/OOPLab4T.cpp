 // OOPLab4T.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №4. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//


#include <iostream>
#include "Task2.cpp"
using namespace std;
// Ваші файли загловки 
//
//#include "Lab4Exmaple.h"

#include "Task.h"

void MainMenu()
{
    int select = 0;
    cout << '\t' << '\t' << '\t' << "Main Menu" << endl;
    do
    {
        cout << "Select option " << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}


int main()
{
    MainMenu();
}