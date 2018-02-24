#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    string name;

    clock_t start = clock();


    cout<<"Jak ci na imie?"<<endl;
    cin>>name;


    cout<<"Otrzymalem imie "<<name<<" po uplywie "<<(clock() - start)/CLOCKS_PER_SEC<<" sekundy.";
    return 0;
}
