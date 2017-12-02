#include <iostream>
#include <string>

using namespace std;

string number;
int dlugosc;
int wynik=0;

int main()
{
    cout<<"Podaj liczbe naturalna: ";

    cin>>number;

    dlugosc = number.length();

    for(int i=0; i<dlugosc; i++)
    {
        wynik = wynik + (number[i] - 48);
    }

    cout<<"Suma cyfr podanej liczby naturalnej wynosi: "<<wynik;
    return 0;
}
