#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string tab[4];

int index;

int main()
{
    srand(time(NULL));
    tab[0] = "kotek";
    tab[1] = "domek";
    tab[2] = "myszka";
    tab[3] = "piesek";

    index = rand() % 4;

    cout<<"Wylosowane slowo to: "<<tab[index];

    return 0;
}
