#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int index_zamiany;
int liczba_elementow;
int zmienna_pomocniczna; //do zamiany

int tab[100];

//bardzo prosta losowosc

int main()
{
    srand(time(NULL));

    cout<<"Wprowadz liczbe elementow: ";
    cin>>liczba_elementow;

    for(int i=0; i<liczba_elementow; i++)
    {
        tab[i] = i;
    }

    for(int i=0; i<liczba_elementow; i++)
    {
        index_zamiany = rand() % liczba_elementow;

        zmienna_pomocniczna = tab[i];
        tab[i] = tab[index_zamiany];
        tab[index_zamiany] = zmienna_pomocniczna;
    }

    for(int i=0; i<liczba_elementow; i++)
    {
        cout<<tab[i]<<" ";
    }

    return 0;
}
