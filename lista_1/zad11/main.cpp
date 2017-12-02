#include <iostream>
#include <string>

using namespace std;

string sentence;
int dlugosc;
int wynik = 0;

int main()
{
    cout<<"Podaj ciag znakow: ";

    getline(cin, sentence);

    dlugosc = sentence.length();
    dlugosc--;
    for(int i=0; i<dlugosc; i++)
    {
        if((sentence[i] == 'o' || sentence[i] == 'O') &&
           (sentence[i+1] == 'o' || sentence[i+1] == 'O'))
        {
            wynik++;
        }
    }
    cout<<"Ilosc sasiednich o wynosi: "<<wynik;



    return 0;
}
