#include <iostream>
#include <string>

using namespace std;

string sentence;
string sentence_no_space = "";
int dlugosc;
int dlugosc_pomoc;
int pomoc;
bool wynik = true;

int main()
{
    cout<<"Wprowadz ciag znakow: ";
    getline(cin, sentence);
    dlugosc = sentence.length();
    dlugosc_pomoc = dlugosc;

    for(int i=0; i<dlugosc; i++)
    {
        if(sentence[i] == ' ')
        {
            dlugosc_pomoc--;
            continue;
        }
        else
        {
            sentence_no_space = sentence_no_space + sentence[i];
        }
    }

    pomoc = dlugosc_pomoc-1;
    dlugosc_pomoc = dlugosc_pomoc / 2;

    for(int i=0; i<dlugosc_pomoc; i++)
    {
        if(sentence_no_space[i] == sentence_no_space[pomoc])
        {
            pomoc--;
            continue;
        }
        else
        {
            wynik = false;
            break;
        }
    }

    if(wynik == true)
    {
        cout<<"Podany ciag jest palindromem.";
    }
    else
    {
        cout<<"Podany ciag nie jest palindromem.";
    }



    return 0;
}
