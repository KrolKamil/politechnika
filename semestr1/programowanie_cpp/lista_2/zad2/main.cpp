#include <iostream>

using namespace std;

double numbers[10];
double minimum;
double maximum;

int main()
{
    cout<<"Wprowadz 10 liczb: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<i+1<<": ";
        cin>>numbers[i];
    }
    minimum = numbers[0];
    maximum = numbers[0];

    for(int i=1; i<10; i++)
    {
        if(numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
        if(numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }
    cout<<"Najwieksza liczba to: "<<maximum<<endl;
    cout<<"Najmniejsza liczba to: "<<minimum;


    return 0;
}
