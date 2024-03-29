﻿ // OOPLab4T.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №4. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//


#include <iostream>
#include "TVectorULong.h"
#include "Task2.h"
using namespace std;

//#include "Task.h"

TVectorULong vl(3, 3), vl1(3, 1), vl2(3, 2);

void MenuTask1();
void MenuTask2();

void MainMenu()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main Menu" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            MenuTask1();
            break;
        case 2:
            MenuTask2();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

void UnariMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. ++vec" << endl;
        cout << "2. --vec" << endl;
        cout << "3. vec++" << endl;
        cout << "4. vec--" << endl;
        cout << "5. !" << endl;
        cout << "6. ~" << endl;
        cout << "7. -" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            ++vl;
            cout << "After ++vec: " << endl;
            vl.Print();
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            --vl;
            cout << "After --vec: " << endl;
            vl.Print();
            break;
        case 3:
            cout << "Prev state: " << endl;
            vl.Print();
            vl++;
            cout << "After vec++: " << endl;
            vl.Print();
            break;
        case 4:
            cout << "Prev state: " << endl;
            vl.Print();
            vl--;
            cout << "After vec--: " << endl;
            vl.Print();
        break; 
        case 5:
            cout << "Prev state: " << endl;
            vl.Print();
            !vl;
            cout << "After !vec: " << endl;
            vl.Print();
            break;
        case 6:
            cout << "Prev state: " << endl;
            vl.Print();
            ~vl;
            cout << "After ~vec: " << endl;
            vl.Print();
            break;
        case 7:
            cout << "Prev state: " << endl;
            vl.Print();
            -vl;
            cout << "After !vec: " << endl;
            vl.Print();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void AppropriationMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. =" << endl;
        cout << "2. +=" << endl;
        cout << "3. -=" << endl;
        cout << "4. *=" << endl;
        cout << "5. /=" << endl;
        cout << "6. %=" << endl;
        cout << "7. |=" << endl;
        cout << "8. ^=" << endl;
        cout << "9. &=" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            vl=(vl1);
            cout << "After =: " << endl;
            vl.Print();
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            vl += (vl1);
            cout << "After +=: " << endl;
            vl.Print();
            break;
        case 3:
            cout << "Prev state: " << endl;
            vl.Print();
            vl -= (vl1);
            cout << "After -=: " << endl;
            vl.Print();
            break;
        case 4:
            cout << "Prev state: " << endl;
            vl.Print();
            vl *= (2);
            cout << "After *=: " << endl;
            vl.Print();
            break;
        case 5:
            cout << "Prev state: " << endl;
            vl.Print();
            vl /= (2);
            cout << "After /=: " << endl;
            vl.Print();
            break;
        case 6:
            cout << "Prev state: " << endl;
            vl.Print();
            vl %= (2);
            cout << "After %=: " << endl;
            vl.Print();
            break;
        case 7:
            cout << "Prev state: " << endl;
            vl.Print();
            vl |= (vl1);
            cout << "After |=: " << endl;
            vl.Print();
            break;
        case 8:
            cout << "Prev state: " << endl;
            vl.Print();
            vl ^= (vl1);
            cout << "After ^=: " << endl;
            vl.Print();
            break;
        case 9:
            cout << "Prev state: " << endl;
            vl.Print();
            vl &= (vl1);
            cout << "After &=: " << endl;
            vl.Print();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void ArithmeticBinaryMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. +" << endl;
        cout << "2. -" << endl;
        cout << "3. *" << endl;
        cout << "4. /" << endl;
        cout << "5. %" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 + vl2;
            cout << "After +: " << endl;
            vl.Print();
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl2 - vl1;
            cout << "After -: " << endl;
            vl.Print();
            break;
        case 3:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 * 5;
            cout << "After *: " << endl;
            vl.Print();
            break;
        case 4:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 / 2;
            cout << "After /: " << endl;
            vl.Print();
            break;
        case 5:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 % 3;
            cout << "After %: " << endl;
            vl.Print();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
} 
void BitwiseBinaryMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. |" << endl;
        cout << "2. ^" << endl;
        cout << "3. &" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 | vl2;
            cout << "After |: " << endl;
            vl.Print();
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 ^ vl2;
            cout << "After ^: " << endl;
            vl.Print();
            break;
        case 3:
            cout << "Prev state: " << endl;
            vl.Print();
            vl = vl1 & vl2;
            cout << "After &3: " << endl;
            vl.Print();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void BitwiseShiftOperationsMenu() 
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. >>" << endl;
        cout << "2. <<" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            vl >> 5;
            cout << "After >>: " << endl;
            vl.Print();
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            vl << 5;
            cout << "After << " << endl;
            vl.Print();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void IndexingNewDeleteFunctionMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. []" << endl;
        cout << "2. New " << endl;
        cout << "3. Delete" << endl;
        cout << "4. ()" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            cout << (vl[9]) << endl;
            vl.Print();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void ComparisonMenu()
{
    int select = 0;
    do
    {
        cout << "Select option " << endl;
        cout << "1. ==" << endl;
        cout << "2. !=" << endl;
        cout << "3. >" << endl;
        cout << "4. >=" << endl;
        cout << "5. <" << endl;
        cout << "6. <=" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl == vl1) << endl;
            break;
        case 2:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl != vl1) << endl;
            break;
        case 3:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl > vl1) << endl;
            break;
        case 4:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl >= vl1) << endl;
            break;
        case 5:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl < vl1) << endl;
            break;
        case 6:
            cout << "Prev state: " << endl;
            vl.Print();
            vl1.Print();
            cout << (vl <= vl1) << endl;
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

void MenuTask1()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Select option " << endl;
        cout << "1. Unari" << endl;
        cout << "2. Appropriation" << endl;
        cout << "3. Arithmetic binary" << endl;
        cout << "4. Bitwise binary" << endl;
        cout << "5. Bitwise shift operations" << endl;
        cout << "6. Indexing, new, delete, ()" << endl;
        cout << "7. Comparison (size)" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            UnariMenu();
            break;
        case 2:
            AppropriationMenu();
            break;
        case 3:
            ArithmeticBinaryMenu();
            break;
        case 4:
            BitwiseBinaryMenu();
            break;
        case 5:
            BitwiseShiftOperationsMenu();
            break;
        case 6:
            IndexingNewDeleteFunctionMenu();
            break;
        case 7:
            ComparisonMenu();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void MenuTask2()
{
    TArchive archive;
    int select = 0;
    int numb;
    string name;
    do
    {
        cout << '\t' << '\t' << '\t' << "Select option " << endl;
        cout << "1. Add book" << endl;
        cout << "2. Index number" << endl;
        cout << "3. Index name" << endl;
        cout << "4. Print archive" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        if (select == 1)
        {
            system("cls");
            cout << "Size: " << archive.getSize() + 1 << endl;
            cout << "Code error: " << archive.getCodeError() << endl;
            cout << "Input info book(Number, name): " << endl;
            cout << "Input number: ";
            cin >> numb;
            cout << "Input name: ";
            cin >> name;
            archive.AddBook(numb, name);
        }
        else if (select == 2)
        {
            system("cls");
            cout << "Input number: ";
            cin >> numb;
            pair<int, string>Book = archive.operator[](numb);
            cout << Book.first << '\t' << Book.second << endl;
            cout << "Code error: " << archive.getCodeError() << endl;
        }
        else if (select == 3)
        {
            system("cls");
            cout << "Input name: ";
            cin >> name;
            pair<int, string>Book = archive.operator[](name);
            cout << Book.first << '\t' << Book.second << endl;
            cout << "Code error: " << archive.getCodeError() << endl;
        }
        else if (select == 4)
        {
            system("cls");
            cout << archive;
        }
        else
            system("cls");
    } while (select != 0);
}


int main()
{
    MainMenu();   
}
