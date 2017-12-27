#include <iostream>
#include <string>

using namespace std;

//nie do konca rozumiem tresc zadania

int main()
{
    string data;

    cout<<"Program konczy kombinacja klawiszy"<<endl;
    cout<<"Ctrl + v"<<endl;

    while(getline(cin, data))
    {
        cout<<"Wprowadziles: "<<data<<endl;
    }
    return 0;
}
