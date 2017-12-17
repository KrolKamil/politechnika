#include <iostream>

using namespace std;

int wymiar;

int main()
{
    cout<<"Podaj wymiar tabliczy do wyswietlenia: ";

    cin>>wymiar;
    cout<<"\t";

    for(int i=1; i<=wymiar; i++)
    {
        cout<<i<<"\t";
    }

    cout<<endl;

    for(int i=1; i<=wymiar; i++)
    {
        cout<<i<<"\t";
        for(int j=1; j<=wymiar; j++)
        {
            cout<<i * j<<"\t";
        }

        cout<<endl;
    }

    return 0;
}
