#include <iostream>
#include <string>

using namespace std;

string word;
int dlugosc;

int main()
{
    cout<<"Podaj ciag znakow do odworcenia: ";
    cin>>word;
    dlugosc = word.length();
    for(int i=dlugosc; i>=0; i--)
    {
        cout<<word[i];
    }
    return 0;
}
