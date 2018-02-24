#include <iostream>
#include <math.h>

using namespace std;

class Circle
{
private:

    double xCenter;
    double yCenter;

    double xPoint;
    double yPoint;

    double r;

public:

    void setValues()
    {
        cout<<"Podaj wspolrzedne srodka kola: "<<endl;
        cout<<"X: ";
        cin>>xCenter;
        cout<<"Y: ";
        cin>>yCenter;

        cout<<"Podaj promien kola: ";
        cin>>r;

        while(r<=0)
        {
            cout<<"Podano ujemna wartosc promienia!"<<endl;
            cout<<"Wprowadz wlasciwa dlugosc promienia: ";
            cin>>r;
        }

        cout<<"Podaj wspolrzedne punktu: "<<endl;
        cout<<"X: ";
        cin>>xPoint;
        cout<<"Y: ";
        cin>>yPoint;
    }

    void ifPointBelongsToCirle()
    {
        double distance = sqrt(pow(xPoint-xCenter,2)+pow(yPoint-yCenter,2));

        if(distance>r)
        {
            cout<<"Punkt nie nalezy do okregu!"<<endl;
        }
        else
        {
            cout<<"Punkt nalezy do okregu!"<<endl;
        }
    }
};

int main()
{
    Circle myCircle;

    myCircle.setValues();

    myCircle.ifPointBelongsToCirle();
    return 0;
}
