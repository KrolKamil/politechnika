#include <iostream>

using namespace std;

struct Student
{
    string imie;
    string nazwisko;
    string adres;
    string pesel;
    string kierunek;
    int nr_leg;
};

void przypisanie(Student *poli)
{
    cout<<"Imie: ";
    cin>>poli->imie;
    cout<<"Nazwisko: ";
    cin>>poli->nazwisko;
    cout<<"Adres: ";
    cin>>poli->adres;
    cout<<"Kierunek: ";
    cin>>poli->kierunek;
    cout<<"Numer legitymaci: ";
    cin>>poli->nr_leg;
    cout<<"Dane Zostaly zapisane.";
}

int main()
{
    // imie, nazwisko, adres, pesel, kierunek, nr+legitymacji.

    Student *s1 = new Student;
    przypisanie(s1);
    return 0;
}
