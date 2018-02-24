#include <iostream>

using namespace std;

int wymiar;
bool zamiana = true;

int main()
{
    cout<<"Podaj dlugosc i wysokosc szachownicy: ";
    cin>>wymiar;

    if(wymiar % 2 == 0)
    {
        for(int i=0; i<wymiar; i++)
        {
            for(int j=0; j<wymiar; j++)
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
            }
            if(zamiana == true)
                {
                    zamiana = false;
                }
                else
                {
                    zamiana = true;
                }
            cout<<endl;
        }
    }
    else
    {
        for(int i=0; i<wymiar; i++)
        {
            for(int j=0; j<wymiar; j++)
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
            }

            cout<<endl;
        }
    }

}
