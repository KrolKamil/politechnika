#include <iostream>

using namespace std;

void przepisz(char x[], char y[])
{
    int i=0;
    while(x[i-1] != '\0')
    {
        y[i] = x[i];
        i++;
    }
    cout<<"Char: "<<y<<endl;
}

void przepisz2(wchar_t xx[], wchar_t yy[])
{
    int i=0;
    while(xx[i-1] != '\0')
    {
        yy[i] = xx[i];
        i++;
    }
    wcout<<"Wchar_t: "<<yy;
}

int main()
{
    char a[100];
    char b[100];

    wchar_t aa[100];
    wchar_t bb[100];

    cout<<"Wprowadz ciag znakow: ";
    cin>>a;
    cout<<"Wprowadz kolejny ciag znakow: ";
    wcin>>aa;

    przepisz(a,b);

    przepisz2(aa, bb);

}
