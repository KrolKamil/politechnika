#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool is_number(char a) //sprawdzam czy jest liczba
{
    if(a>=48 && a<=57)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check = true;
string sentence;
int dl;

string wynik = "";
int int_wynik;

int i = 0; //index wpisanego ciagu

int main()
{
    while(check == true)
    {
        cout<<"Wprowadz ciag: ";
        getline(cin,sentence);
        dl = sentence.length();

        while(i<dl)
        {
            check = false;
            if(is_number(sentence[i]))
            {
                if(i>0) //sprawdzam czy wartosc jest ujemna
                {
                    if(sentence[i-1] == '-')
                    {
                        wynik = "-";
                    }
                }
                while(is_number(sentence[i]))
                {
                    wynik = wynik + sentence[i];
                    i++;
                }
                //zamianiam na int bo zadanie tak kaze
                // nie wiem po co XD
                int_wynik = atoi(wynik.c_str());
                cout<<int_wynik;
                wynik = "";
                check = true;
                cout<<endl;
                break;
            }
        i++;
        }
        i = 0;
    }
    cout<<0<<endl;
    cout<<"Brak liczb, koniec programu.";
}
