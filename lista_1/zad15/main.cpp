#include <iostream>

using namespace std;

int wymiar;

// program "najlepiej" dziala do wymiaru 3x3

int main()
{
    cout<<"Podaj wymiar tabliczy do wyswietlenia: ";

    cin>>wymiar;
    cout<<"  ";

    for(int i=1; i<=wymiar; i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    for(int i=1; i<=wymiar; i++)
    {
        cout<<i<<" ";
        for(int j=1; j<=wymiar; j++)
        {
            cout<<i * j<<" ";
        }

        cout<<endl;
    }

    return 0;
}
