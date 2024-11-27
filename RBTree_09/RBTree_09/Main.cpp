#include <iostream>
#include "RedBlackTree.h"
#include <time.h>
using namespace std;


float random()
{
    float t = (rand() % 26 + 0); // 13
    return(t);
}

void main()
{
    srand(time(0));
    Time time;
    time.minutes = 0;
    cout << endl;

    RBTree Tree1;
    setlocale(LC_ALL, "rus");

    time.hour = 10; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 5; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 20; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 1; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 6; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 15; Tree1.Insert(time, Tree1.TNill); // Добавляем
    time.hour = 25; Tree1.Insert(time, Tree1.TNill); // Добавляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 10; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 15; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 20; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 5; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 6; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    Tree1.DeleteRBTree(&Tree1, Tree1.root);

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    //time.hour = 11; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 22; Tree1.Insert(time, Tree1.TNill); // Добавляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 11; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 3; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 0; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 5; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 13; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 17; Tree1.Insert(time, Tree1.TNill); // Добавляем

    //time.hour = 10; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 11; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    //time.hour = 5; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    //time.hour = 6; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    //time.hour = 10; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    //time.hour = 9; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    ////time.hour = 9;
    ////Node ss = *Tree1.FindNode(time, Tree1.TNill);
    ////Tree1.PrintTree(&ss, 0, Tree1.TNill); cout << endl; // Печатаем
    ////Tree1.FixupDelete(&ss, Tree1.TNill);

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    /*
    for (int i = 0; i < 7; i++)
    {
        time.hour = i; Tree1.Insert(time, Tree1.TNill); // Добавляем
    }

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 3; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    time.hour = 4; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    time.hour = 5; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    time.hour = 6; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;

    time.hour = 2; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    cout << "------------------------------------------" << endl;
    */


    //time.hour = 10; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //time.hour = 9; Tree1.Insert(time, Tree1.TNill); // Добавляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 9; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //Бешеный тестировщик v1.0

    //for (int i = 0; i < 30; i++)
    //{
    //    int r = random();
    //    cout << "Добавили вершину " << r << endl;
    //    time.hour = r; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //    //time.hour = i; Tree1.Insert(time, Tree1.TNill); // Добавляем

    //    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //    cout << "------------------------------------------" << endl;
    //}

    //for (int i = 0; i < 7; i++) cout << endl;


    //for (int i = 0; i < 100; i++)
    //{
    //    int r = random();
    //    cout << "Удалили вершину " << r << endl;
    //    time.hour = r; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем


    //    cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //    cout << "------------------------------------------" << endl;
    //}
}


    //for (int i = 15; i > 0; i--)
    //{
    //    time.hour = i; Tree1.Insert(time, Tree1.TNill); // Добавляем
    //}

    ////time.hour = 10; Tree1.Insert(time, Tree1.TNill); // Добавляем

    ////cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    ////cout << "------------------------------------------" << endl;

    ////time.hour = 11; Tree1.Insert(time, Tree1.TNill); // Добавляем
    ////time.hour = 12; Tree1.Insert(time, Tree1.TNill); // Добавляем

    ////cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    ////cout << "------------------------------------------" << endl;

    ////time.hour = 11; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    ////cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    ////cout << "------------------------------------------" << endl;

    ////Tree1.DeleteRBTree(&Tree1, Tree1.root);

    ////cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    ////cout << "------------------------------------------" << endl;

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 15; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 8; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 9; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 10; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;





    //time.hour = 10; Tree1.Insert(time, Tree1.TNill); // Добавляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //time.hour = 10; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

    //Tree1.DeleteRBTree(&Tree1, Tree1.root);

    //cout << endl; Tree1.PrintTree(Tree1.root, 0, Tree1.TNill); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;





    //cout << "Добавили все вершины" << endl;

    //for (int i = 20; i > 0; i--)
    //{
    //    time.hour = i; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем
    //}

    //cout << endl; Tree1.PrintTree(Tree1.root, 0); cout << endl; // Печатаем
    //cout << "------------------------------------------" << endl;

/* // Ввод 1
time.hour = 10; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 5; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 20; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 1; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 6; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 15; Tree1.Insert(time, Tree1.TNill); // Добавляем
time.hour = 25; Tree1.Insert(time, Tree1.TNill); // Добавляем
*/

/* // Ввод 2
for (int i = 15; i > 5; i--)
{
    time.hour = i; Tree1.Insert(time, Tree1.TNill); // Добавляем
}
*/


//time.hour = 8; Tree1.Delete(time, &Tree1, Tree1.TNill); // Удаляем

//time.hour = 16; Tree1.Insert(time, Tree1.TNill); // Добавляем

//cout << endl; Tree1.PrintTree(Tree1.root, 0); cout << endl; // Печатаем
//cout << "------------------------------------------" << endl;



