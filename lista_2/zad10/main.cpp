#include <iostream>

using namespace std;

int main()
{
    string wynik = "";
    unsigned int liczba;
    int pomoc = 1;
    int zera = 0;
    int jedynki = 0;

    cout<<"Wprowadz liczbe: ";
    cin>>liczba;
    while(pomoc<=liczba)
    {
        if(liczba&pomoc)
        {
            wynik = "1" + wynik;
            jedynki++;
        }
        else
        {
            wynik = "0" + wynik;
            zera++;
        }
        pomoc = pomoc*2;
    }
    cout<<"Liczba w postaci binarnej: ";
    if(wynik=="")
    {
        cout<<0;
    }
    cout<<wynik<<endl;
    cout<<"Liczba zer: "<<zera<<endl;
    cout<<"Liczba jedynek: "<<jedynki;
    return 0;
}
