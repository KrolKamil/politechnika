#include <iostream>
#include <cstdlib>

using namespace std;

union Liczba
{
    int calkowita;
    double wymierna;
};

struct Dane
{
    int tp;
    Liczba zaw;
};

Dane Odczyt()
{
    Dane x1;

    cout<<"Jaki typ danych chesz wczytac"<<endl;
    cout<<"Calkowity 0, Wymierny 1: ";
    cin>>x1.tp;

    if(x1.tp == 0)
    {
        cout<<"Wprowadz liczbe calkowita: ";
        cin>>x1.zaw.calkowita;
    }
    else if(x1.tp == 1)
    {
        cout<<"Wprowadz liczbe wymierna: ";
        cin>>x1.zaw.wymierna;
    }
    else
    {
        cout<<"Wprowadzona zla wartosc!";
        exit(0);
    }

    return x1;
}

int main()
{
    Dane odbior = Odczyt();

    if(odbior.tp == 0)
    {
        cout<<"Wpisales: ";
        cout<<odbior.zaw.calkowita;
    }
    else
    {
        cout<<"Wpisales: ";
        cout<<odbior.zaw.wymierna;
    }

}
