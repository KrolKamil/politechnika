#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle()
{
    //ctor
}

Circle::~Circle()
{
    //dtor
}

 void Circle::setValues()
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

 void Circle::ifPointBelongsToCirle()
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
