#include <iostream>

using namespace std;

string pesel;
int t;
int wynik = 0;

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>pesel;
        wynik = wynik + (pesel[0] - 48);
        wynik = wynik + ((pesel[1] - 48) *3);
        wynik = wynik + ((pesel[2] - 48) *7);
        wynik = wynik + ((pesel[3] - 48) *9);
        wynik = wynik + (pesel[4] - 48);
        wynik = wynik + ((pesel[5] - 48) *3);
        wynik = wynik + ((pesel[6] - 48) *7);
        wynik = wynik + ((pesel[7] - 48) *9);
        wynik = wynik + (pesel[8] - 48);
        wynik = wynik + ((pesel[9] - 48) *3);
        wynik = wynik + (pesel[10] - 48);

        if(wynik % 10 == 0)
        {
            cout<<"D"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
        wynik = 0;
    }

    return 0;
}
