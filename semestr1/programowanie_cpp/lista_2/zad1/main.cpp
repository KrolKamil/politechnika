#include <iostream>
#include <string>

using namespace std;

char znaki[100];
int ilosc[100];

int index=1;

string data;
int dlugosc;
bool spr = true;

int main()
{

    for(int i=0; i<100; i++)
    {
        ilosc[i] = 0;
    }

    getline(cin,data);
    dlugosc = data.length();

    if(dlugosc>0)
    {
        znaki[0] = data[0];
        ilosc[0] = ilosc[0] + 1;

        for(int i=1; i<dlugosc; i++)
        {
            for(int j=0; j<index; j++)
            {
                if(data[i] == znaki[j])
                {
                    ilosc[j] = ilosc[j] + 1;
                    spr = false;
                    break;
                }
            }
            if(spr == true)
            {
                znaki[index] = data[i];
                ilosc[index] = ilosc[index] + 1;
                index++;
            }
            else
            {
                spr = true;
            }

        }

        for(int i=0; i<index; i++)
        {
            cout<<znaki[i]<<" "<<ilosc[i]<<endl;
        }

    }
    else
    {
        cout<<"Wprowadz jakies znaki!";
    }




    return 0;
}
