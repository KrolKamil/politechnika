#include <iostream>

#include "Person.h"

using namespace std;

Person ObiektNadMain("ObiektNadMain");

int main()
{
    cout<<"Obiekty utworzeone w 'main':"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Tworzenie obiektu P1: "<<endl;
    Person P1;
    cout<<"Tworznie obiektu P2 za pomoca operatora new"<<endl;
    Person *P2 = new Person();
    cout<<"Tworznie obiektu P3: "<<endl;
    Person *P3 = new Person("P3");

    cout<<"Usuwanie obiektu P2 i P3 za pomoca operatora delete: "<<endl;
    delete P2;
    delete P3;
    cout<<"--------------------------"<<endl;

    cout<<"Wywolywanie destruktorow dla obiektow P1, ObiektNadMain, ObiektPodMain"<<endl;
    cout<<"po zakonczeniu dzialania programu: "<<endl;
    cout<<endl;
    return 0;
}

Person ObiektPodMain("ObiektPodMain");
