#include <iostream>

using namespace std;

int main()
{
    int h;
    int pomoc;
    cout<<"Podaj wysokosc trojkata: ";
    cin>>h;
    pomoc = h;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<pomoc; j++)
        {
            cout<<'*';
        }
        pomoc--;
        cout<<endl;
    }
    return 0;
}
