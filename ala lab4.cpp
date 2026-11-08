// ala lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream><studio.h><cstdio>
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
void wieksza(int a, int b)
{
    if (a > b) {
        cout << a << " jest wieksza liczba" << endl;
    }
    else
    {
        cout << b << " jest wieksza liczba" << endl;
    }
}
    int druga(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
           
    }
    void najmniejsza(int a, int b, int c)
    {
        if (a <=b && a<=c)
        {
            cout << a << " jest najmniejsza"<<endl;

        }
        else if (b <= a && b <= c)
        {
            cout << b << " jest najmniejsza"<<endl;
        }
        else  
        {
            cout << c << " jest najmniejsza"<<endl;
        }
    }
    int najmniejsza_2(int a, int b, int c)
    {
        if (a <= b && a <= c)
            return a;
        else if (b <= a && b <= c)
            return b;
        else
            return c;
    }
    float pole_trojkata(float a, float h)
    {
        
        float pole;
        pole = (a * h) / 2.0;
        cout<<"pole trojkata wynosi: "<< pole;
        cout << endl;
        return pole;
    }
    void wszystkie_dzielniki(int n)
    {
        for (int i = 1;i <= n;i++)
        {
            if (n % i == 0)
            {
                cout << i << endl;
            }
        }
    }
    float srednia_wazona(float a, float b)
    {
        float x, y; float srednia;
        cout << "Podaj wage 1 liczby: "<<endl;
        cin >> x;
        cout << "Podaj wage 2 liczby: " << endl;
        cin >> y;
        srednia = (a * x + b * y) / (x + y);
        return srednia;
    }
    float pitagoras(float a, float b)
    {
        double przeciwprostokatna = (a * a) + (b * b);
        przeciwprostokatna = sqrt(przeciwprostokatna);
        return przeciwprostokatna;
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
    //zad,3
    /*int a, b;
    cin >> a;
    cin >> b;
    wieksza(a, b);
    cout << druga(a, b) << endl;*/
    //zad 4
    /*int a, b, c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "podaj b: ";
    cin >> b;
    cout << "podaj c: ";
    cin >> c;
    najmniejsza(a, b, c);
    cout << endl;
    cout<<najmniejsza_2(a, b, c);*/
    //zad 5
   /* float a; float h;
    cout << "Podaj podstawe: " << endl;
    cin >> a;
    cout << "podaj wysokosc: " << endl;
    cin >> h;
    
    double x = pole_trojkata(a, h);
    cout << x * 2 << endl;*/
    //zad 6
    /*int n;
    cout << "podaj liczbe calkowita dodatnia: ";
    cin >> n;
    wszystkie_dzielniki(n);*/
    //zad 7
    /*float a, b;
    cout << "Podaj 1 liczbe: " << endl;
    cin >> a;
    cout << "Podaj 2 liczbe: " << endl;
    cin >> b;
    
    cout << "srednia wazona wynosi: " << srednia_wazona(a,b) << endl;*/
    //zad 8
   /* float a, b;
    a = 10;
    b = 20;
    cout << pitagoras(a, b);*/
   /* int tablica[100];
    for (int i = 40;i <= 99;i++)
    {
        tablica[i] = i;
        cout << i << endl;
    }*/
    //zad 10
    
    
   
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
// 
// 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
