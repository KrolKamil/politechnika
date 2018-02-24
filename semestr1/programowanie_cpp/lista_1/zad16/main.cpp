#include <iostream>
#include <string>

using namespace std;

double a;
double b;
string znak;
string sprawdzam = "t";

int main()
{
    do
    {
        cout<<"Podaj pierwsza liczbe: ";

        cin>>a;

        cout<<"Podaj znak dzialania (+, -, *, /): ";

        cin>>znak;

        cout<<"Podaj druga liczbe: ";

        cin>>b;

        if(znak == "+")
        {
            cout<<"Wynik dodawania: "<<a+b<<endl;
        }
        else if(znak == "-")
        {
            cout<<"Wynik odejmowania: "<<a-b<<endl;
        }
        else if(znak == "*")
        {
            cout<<"Wynik mnozenia: "<<a * b<<endl;
        }
        else if(znak == "/")
        {
            if(b == 0)
            {
                cout<<"Nie mozna dzielicz przez 0 !"<<endl;
            }
            else
            {
                cout<<"Wynik dzielenia: "<<a/b<<endl;
            }
        }
        else
        {
            cout<<"Podano zly znak dzialania !"<<endl;
        }
        cout<<"Czy chcesz kontynuowac obliczenia? [t/n]: ";
        cin>>sprawdzam;
        if(sprawdzam != "t")
        {
            sprawdzam = "n";
        }
    }while(sprawdzam == "t");


    return 0;
}
