#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie;
    int dlugosc, ilosc_a=0;
    cout<<"Podaj swoje imie: ";
    cin>>imie;
    dlugosc = imie.length();

    for(int i=0; i<dlugosc; i++)
    {
        if(imie[i] == 'a' || imie[i] == 'A')
        {
            ilosc_a++;
        }
    }
    cout<<"W twoim imieniu znajduje sie: "<<ilosc_a<< " a/A.";

    return 0;
}
