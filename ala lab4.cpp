// ala lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void przywitanie(string imie)
{
    cout << "Czesc " << imie << endl;
}
void tabliczka()
{
    
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
   
}
void wieksza(int a, int b);
{ 
    if (a > b) {
        cout << a<<" jest wieksza liczba" << endl;
    }
    else
    {
        cout << b<<"jest wieksza liczba" << endl;
    }

    int druga(int a, int b)
    {
        if (a > b)
            return a;
        else
            return b;
    }

}

int main()

{    /* zad 1.

    string imie;
    cout << "podaj imie: ";
    cin >> imie;
    przywitanie (imie);
    */


    /*zad 2. 
    tabliczka();
    */
    int a, b;
    cin >> a;
    cin >> b;
    wieksza(a, b);
    cout << druga(a, b) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
