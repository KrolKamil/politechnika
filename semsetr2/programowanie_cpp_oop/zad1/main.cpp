#include <iostream>

using namespace std;

class Person
{
    public:
        string name;
        string surname;
        int age;
        static int createdPersons;

        Person(string initName="", string initSurname="", int initAge=NULL)
        {
            name = initName;
            surname = initSurname;
            age = initAge;

            createdPersons++;
        }

        ~Person()
        {
            createdPersons--;
        }

};

int Person::createdPersons = 0;

    Person P4;

    Person P5("Juliet","Smith",21);

    Person *P6 = new Person;

int main()
{
    Person P1;

    Person P2("John","Smith",21);

    Person *P3 = new Person;

    cout<<"Ilosc utworzonych obiektow: ";
    cout<<Person::createdPersons<<endl;

    cout<<"'Niszczenie obiektow utworzonych za pomoca new'"<<endl;

    delete P3;
    delete P6;

    cout<<"Ilosc utworzonych obiektow: ";
    cout<<Person::createdPersons<<endl;

    return 0;
}
