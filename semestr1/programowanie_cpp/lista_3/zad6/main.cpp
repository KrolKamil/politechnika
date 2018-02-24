#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char a;

int main()
{
    srand(time(NULL));

    a = 97 + (rand() % 26);

    cout<<"Wylosowany znak to: "<<a;
    return 0;
}
