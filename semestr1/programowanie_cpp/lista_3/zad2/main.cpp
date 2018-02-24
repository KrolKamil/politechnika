#include <iostream>

using namespace std;

int porownaj(string *s, string *t)
{
    if(*s == *t)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a;
    string b;

    cout<<"Podaj dwa ciagi znakow do porownania"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    string *wsk_a = &a;
    string *wsk_b = &b;

    cout<<"Wynik: ";
    cout<<porownaj(wsk_a,wsk_b);
}
