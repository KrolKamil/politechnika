#include <iostream>

using namespace std;

double a11;
double a12;
double a21;
double a22;

double wyznacznik;

double pomoc;

int main()
{
    cout<<"Podaj a11: ";
    cin>>a11;
    cout<<"Podaj a12: ";
    cin>>a12;
    cout<<"Podaj a21: ";
    cin>>a21;
    cout<<"Podaj a22: ";
    cin>>a22;

    wyznacznik = (a11 * a22) - (a12 * a21);

    cout<<"Wyznacznik stopnia macierzy wynosi: "<<wyznacznik<<endl;

    if(wyznacznik != 0)
    {
        cout<<"Macierz odwrotna: "<<endl;

        pomoc = 1 / ( (a11 * a22) - ( a12 * a21 ) );

        cout<< a22 * pomoc <<" "<< -a12 * pomoc<<endl;
        cout<< -a21 * pomoc<<" "<< a11 * pomoc<<endl;
    }

    return 0;
}
