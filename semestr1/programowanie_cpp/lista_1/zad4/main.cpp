#include <iostream>

using namespace std;

int main()
{
    int h;
    int stojak;
    int odstepy;
    int pomoc_odstepy_nozka;
    int gwiazdki = 1;
    cout<<"Podaj wysokosc choinki: ";
    cin>>h;

    stojak = 2 * (h-1) - 1;
    odstepy = h - 2;
    pomoc_odstepy_nozka = odstepy;

    for(int i=0; i<h-1; i++)
    {
        for(int j=0; j<odstepy; j++)
        {
            cout<<" ";
        }

        for(int j=0; j<gwiazdki; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        gwiazdki = gwiazdki +2;
        odstepy--;
    }

    for(int j=0; j<pomoc_odstepy_nozka; j++)
    {
        cout<<" ";
    }

    cout<<"#"<<endl;
    for(int i=0; i<stojak; i++)
    {
        cout<<'-';
    }

    return 0;
}
