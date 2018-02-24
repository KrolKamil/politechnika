#include <iostream>

using namespace std;

int szerokosc;
int wymiar;
int pomoc = 0; //ustala kiedy wypisac "spacje"
bool zamiana = true;

int main()
{
    cout<<"Podaj szerokosc szachownicy: ";
    cin>>szerokosc;
    wymiar = szerokosc * szerokosc;

    for(int i=0; i<wymiar; i++)
    {
        if(szerokosc % 2 != 0)
        {
            if(pomoc % szerokosc == 0)
            {
                cout<<endl;
            }

            if(zamiana == true)
            {
                cout<<'#';
                zamiana = false;
            }
            else
            {
                cout<<' ';
                zamiana = true;
            }
            pomoc++;
        }
        else
        {
            if(zamiana == true)
            {
                cout<<'#';
                zamiana = false;
            }
            else
            {
                cout<<' ';
                zamiana = true;
            }

            pomoc++;

            if(pomoc % szerokosc == 0)
            {
                cout<<endl;
                if(zamiana == true)
                {
                    zamiana = false;
                }
                else
                {
                    zamiana = true;
                }
            }
        }
    }
}
