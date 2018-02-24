#include <iostream>
#include <string>

using namespace std;

string sentence;
int dlugosc;
char pomoc;

int main()
{
    cout<<"Podaj ciag do modyfikacji: ";
    getline(cin, sentence);

    dlugosc = sentence.length();

    for(int i=0; i<dlugosc; i++)
    {
        if(sentence[i] == ' ')
        {
            continue;
        }
        else
        {
            if(sentence[i] > 96 && sentence[i] < 123)
            {
                 pomoc = sentence[i] - 32;
                 cout<<pomoc;
            }
            else
            {
                pomoc = sentence[i];
                cout<<pomoc;
            }
        }
    }
    return 0;
}
