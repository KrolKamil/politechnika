#include <iostream>
#include <fstream>

using namespace std;

bool pomoc = false;
string sentence;
int dlugosc;
int wynik=0;

int main()
{
    cout<<"Podaj ciag znakow: ";

    getline(cin, sentence);

    dlugosc = sentence.length();

    for(int i=0; i<dlugosc; i++)
    {
        if(sentence[i] == ' ')
        {
            pomoc = false;
            continue;
        }
        else if(pomoc == false && sentence[i] != ' ')
        {
            wynik++;
            pomoc = true;
        }
        else
        {
            pomoc = true;
        }
    }
    cout<<"Zdan w podanym ciagu znakow jest: "<<wynik;

    return 0;
}
