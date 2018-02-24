#include <iostream>
#include <string>

using namespace std;

string sentence;
string wynik = "";
int dlugosc;

int main()
{
    getline(cin, sentence);
    dlugosc = sentence.length();

    if(dlugosc >= 5)
    {
        for(int i=0; i<dlugosc; i++)
        {
            if((i < dlugosc - 4) && (sentence[i] == 'k' && sentence[i+1] == 'o'
            && sentence[i+2] == 't' && sentence[i+3] == 'e' && sentence[i+4] == 'k'))
            {
                wynik = wynik + "piesek";
                i = i + 4;
            }
            else
            {
                wynik = wynik + sentence[i];
            }
        }
        cout<<wynik;
    }
    else
    {
        cout<<sentence;
    }

    return 0;
}
