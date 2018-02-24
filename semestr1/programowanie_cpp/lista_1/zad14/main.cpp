#include <iostream>
#include <string>

using namespace std;

int number;

int wynik[100];

int index = 0;



int main()
{
    cout<<"Podaj liczbe naturalna: ";

    cin>>number;

    cout<<"Podana liczba w systemie binarnym wynosi: ";
    while(number != 0)
    {
        wynik[index] = number % 2;
        number = number / 2;
        index++;
    }
    index--;
    for(int i=index; i>=0; i--)
    {
        cout<<wynik[i];
    }


    return 0;
}
