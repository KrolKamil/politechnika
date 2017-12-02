#include <iostream>
#include <string>

using namespace std;

int number;
int i = 0;

int five = 0;
int six = 0;
int seven = 0;
int eighth = 0;
int nine = 0;
int ten = 0;

int x1;
int x2;
int x3;

void fill(int number)
{
    if(number == 5)
    {
        five = 5;
    }
    else if(number == 6)
    {
        six = 6;
    }
    else if(number == 7)
    {
        seven = 7;
    }
    else if(number == 8)
    {
        eighth = 8;
    }
    else if(number == 9)
    {
        nine = 9;
    }
    else if(number == 10)
    {
        ten = 10;
    }
}

int main()
{
    while(cin>>number)
    {
        if(number < 0)
        {
            break;
        }
        if(i<2)
        {
            if(i % 3 == 0)
            {
                x1 = number;
                fill(number);
            }
            else if(i % 3 == 1)
            {
                x2 = number;
                fill(number);
            }

            i++;
        }
        else
        {
            if(i % 3 == 0)
            {
                x1 = number;
                fill(number);
            }
            else if(i % 3 == 1)
            {
                x2 = number;
                fill(number);
            }
            else
            {
                x3 = number;
                fill(number);
            }

            if( (x1 == x2) && (x2 == x3))
            {
                break;
            }

            i++;
        }
    }

    cout<<endl;

    if(five != 0)
    {
        cout<<five<<" ";
    }
    if(six != 0)
    {
        cout<<six<<" ";
    }
    if(seven != 0)
    {
        cout<<seven<<" ";
    }
    if(eighth != 0)
    {
        cout<<eighth<<" ";
    }
    if(nine != 0)
    {
        cout<<nine<<" ";
    }
    if(ten != 0)
    {
        cout<<ten<<" ";
    }


    return 0;
}
