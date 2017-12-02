#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

// Nie poznalem jeszcze na zajeciach liczb zespolonych

double a = 0.0;

double b = 0.0;

double c = 0.0;

double delta;

double delta_pierwiastek;

double x1 = 0.0;

double x2 = 0.0;

int main()
{
    cout<<"Wprowadz a: ";
    cin>>a;
    cout<<"Wprowadz b: ";
    cin>>b;
    cout<<"Wprowadz c: ";
    cin>>c;

    if(a != 0)
    {
        delta =  (b * b) - (4 * a * c);
        delta_pierwiastek = sqrt(delta);

        if(delta > 0)
        {
            x1 = (-b - delta_pierwiastek) / (2 * a);

            x2 = (-b + delta_pierwiastek) / (2 * a);

            cout<<"Pierwszy pierwiastek wynosi: "<<x1<<endl;
            cout<<"Drugi pierwiastek wynosi: "<<x2<<endl;
        }
        else if(delta == 0)
        {
            x1 = -b / (2 * a);
            cout<<"Pierwiastek wynosi: "<<x1;
        }
        else
        {

            delta_pierwiastek = sqrt(fabs(delta));
            x1 = -b / (2 * a);
            x2 = fabs( delta_pierwiastek / (2 * a) );

            cout<<"Pierwiastek Re: "<<x1<<endl;
            cout<<"Pierwiastek Im: "<<x2<<endl;
        }
    }

    return 0;
}
