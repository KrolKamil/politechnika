#include <iostream>
#include <string>

using namespace std;

string a;
string b;

int wynik[201];
int index = 0;

int a_dlugosc;
int b_dlugosc;

int a_pomoc=0;
int b_pomoc=0;
int suma_pomoc;

int reszta=0;

//roziwazanie bez "przesuwania" ciagu znakow
//spaghetti konkretne ale dziala XD

int main()
{
    cout<<"Wprowadz pierwsza liczbe: ";
    cin>>a;
    cout<<"Wprowadz druga liczbe: ";
    cin>>b;
    a_dlugosc = a.length();
    b_dlugosc = b.length();

    a_dlugosc--;
    b_dlugosc--;

    if(a_dlugosc <= b_dlugosc)
    {
        while(a_dlugosc >= 0)
        {
            a_pomoc = (a[a_dlugosc] - 48);
            b_pomoc = (b[b_dlugosc] - 48);

            suma_pomoc = a_pomoc + b_pomoc + reszta;

            reszta = 0;

            if(suma_pomoc > 9)
            {
                wynik[index] = (suma_pomoc % 10);
                index++;
                reszta = 1;
            }
            else
            {
                wynik[index] = suma_pomoc;
                index++;
            }
        a_dlugosc--;
        b_dlugosc--;
        }

        while(b_dlugosc >= 0)
        {
            b_pomoc = (b[b_dlugosc] - 48);

            b_pomoc = b_pomoc + reszta;

            reszta = 0;

            if(b_pomoc > 9)
            {
                wynik[index] = (b_pomoc % 10);
                index++;
                reszta = 1;
            }
            else
            {
                wynik[index] = b_pomoc;
                index++;
            }
            b_dlugosc--;
        }
        if(reszta != 0)
        {
            wynik[index] = reszta;
            index++;
        }

        index--;

        for(int i=index; i>=0; i--)
        {
            cout<<wynik[i];
        }
    }
    else
    {
        while(b_dlugosc >= 0)
        {
            a_pomoc = (a[a_dlugosc] - 48);
            b_pomoc = (b[b_dlugosc] - 48);

            suma_pomoc = a_pomoc + b_pomoc + reszta;

            reszta = 0;

            if(suma_pomoc > 9)
            {
                wynik[index] = (suma_pomoc % 10);
                index++;
                reszta = 1;
            }
            else
            {
                wynik[index] = suma_pomoc;
                index++;
            }
        a_dlugosc--;
        b_dlugosc--;
        }

        while(a_dlugosc >= 0)
        {
            a_pomoc = (a[a_dlugosc] - 48);

            a_pomoc = a_pomoc + reszta;

            reszta = 0;

            if(a_pomoc > 9)
            {
                wynik[index] = (a_pomoc % 10);
                index++;
                reszta = 1;
            }
            else
            {
                wynik[index] = a_pomoc;
                index++;
            }
            a_dlugosc--;
        }
        if(reszta != 0)
        {
            wynik[index] = reszta;
            index++;
        }

        index--;

        for(int i=index; i>=0; i--)
        {
            cout<<wynik[i];
        }
    }
    return 0;
}
