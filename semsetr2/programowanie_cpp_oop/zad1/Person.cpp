#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person()
{
    cout<<"Konstruktor domyslny"<<endl;
    cout<<endl;
}

Person::Person(string name)
{
    cout<<"Konstruktor parametryczny obiektu: "<<name<<endl;
    cout<<endl;
}

Person::~Person()
{
    cout<<"Destruktor zostal wywolany!"<<endl;
}
