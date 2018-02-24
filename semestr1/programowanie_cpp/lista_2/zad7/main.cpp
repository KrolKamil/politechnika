#include <iostream>
#include <string>

using namespace std;

bool spr = true;

void litery(string *wynik, string *dane)
{
    //zmiennne pomocnicze
    string x = "";
    string y = *dane;

    int dl_x;
    int dl_y;
    char pomoc;

    dl_x = 1;
    dl_y = y.length();

    for(int i=0; i<dl_y; i++)
    {
        if(y[i] >= 65 && y[i] <=90)
        {
            pomoc = (y[i] +32);
            y[i] = pomoc;
        }
    }

    x = y[0];

    for(int i=1; i<dl_y; i++)
    {
        for(int j=0; j<dl_x; j++)
        {
            if(y[i] == x[j])
            {
                spr = false;
                break;
            }
        }
        if(spr == true)
        {
            if(y[i] == ' ')
            {
                continue;
            }
            x = x + y[i];
            dl_x++;
            spr = true;
        }
        else
        {
            spr = true;
        }
    }
    *wynik = x;
    cout<<"Wynik: "<<*wynik;
}

int main()
{
    string data;
    string wynik = "";

    cout<<"Wprowadz ciag znakow: ";
    getline(cin,data);

    string *wsk_data = &data;
    string *wsk_wynik = &wynik;

    litery(wsk_wynik, wsk_data);

    return 0;
}
