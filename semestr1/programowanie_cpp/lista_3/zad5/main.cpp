#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int a;
int b;
int wynik;
int roznica;

char czy_powtorzyc = 'T';

int main()
{
    srand(time(NULL));
    while(czy_powtorzyc == 'T')
    {
        a = rand() % 101;
        roznica = 100 - a;

        b = rand() % (roznica+1);

        cout<<"Jaka jest suma liczb ";
        cout<<a<<"+"<<b<<" = ?"<<endl;
        cout<<"=";
        cin>>wynik;

        if(wynik == a+b)
        {
            cout<<"Dobrze"<<endl;
        }
        else
        {
            cout<<"Niestety zle"<<endl;
        }

        cout<<"Czy bawimy sie dalej [T/N]?";
        cin>>czy_powtorzyc;
        while((czy_powtorzyc != 'T') && (czy_powtorzyc != 'N'))
        {
            cout<<"Musisz wpisac T lub N: ";
            cin>>czy_powtorzyc;
        }
    }

    cout<<"Koniec programu.";


    return 0;
}
