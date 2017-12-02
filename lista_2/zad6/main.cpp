#include <iostream>
#include <string>

using namespace std;

void odwroc(string *wynik, string *dane)
{
    //zmienne pomocnicze
    string ciag_wynik = *wynik;
    string ciag_dane = *dane;

    int dlugosc = ciag_dane.length();
    dlugosc--;

    for(int i=dlugosc; i>=0; i--)
    {
        ciag_wynik = ciag_wynik + ciag_dane[i];
    }

    *wynik = ciag_wynik;

    cout<<"Odwocony ciag znakow to: ";
    cout<<*wynik;

}

int main()
{
    string data;
    string wynik = "";

    cout<<"Wprwoadz ciag znakow: ";
    cin>>data;

    string *wsk_data = &data;
    string *wsk_wynik = &wynik;

    odwroc(wsk_wynik, wsk_data);

    return 0;
}
