#include <iostream>

using namespace std;

int number;

int i=2;

bool check = true;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>number;

    if(number > 1)
    {
        while(i<number)
        {
            if(number % i == 0)
            {
                check = false;
                break;
            }
            i++;
        }

        if(check == true)
        {
            cout<<"Podana liczba jest liczba pierwsza";
        }
        else
        {
            cout<<"Podana liczba nie jest liczba pierwsza";
        }
    }
    else
    {
        cout<<"Podana liczba nie jest liczba pierwsza";
    }
    return 0;
}
