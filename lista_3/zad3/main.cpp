#include <iostream>

using namespace std;

void dopisz(string *s, string *t)
{
    *s = *s + *t;
    cout<<*s;
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
    dopisz(wsk_a,wsk_b);
}
