#include <iostream>
#include <cstdlib>
#include <string>
#include <wchar.h>

using namespace std;

void przepisz(char tab_a[], char tab_b[])
{
    cout<<"Char: ";
    tab_b = tab_a;
    cout<<tab_b<<endl;
}

/*
void przepisz2(wchar_t tab_a, wchar_t tab_b)
{
    tab_b = tab_a;
    cout<<"wchar_t: ";
    wcout<<tab_b;
}
*/
//poleglem na wchar_t

int main()
{
    char tab1[100];
    char tab2[100];

    //wchar_t tablica1;
    //wchar_t tablica2;

    cout<<"Wprowadz ciag znakow: ";
    cin>>tab1;
    //tablica1 = L'Kamil';
    przepisz(tab1, tab2);
    //przepisz2(tablica1, tablica2);

}
