#include <cstdlib>
#include <iostream>

using namespace std;

float a1, b1, c1;
float a2, b2, c2;
float w, wx, wy;
float x, y;

int main()
{
    cout<<"Uklad rownan:"<<endl;
    cout<<"a1x + b1y = c1"<<endl;
    cout<<"a2x + b2y = c2"<<endl;
    cout<<endl;

    cout<<"Wprowadz dane: "<<endl;
    cout<<"a1: ";
    cin>>a1;
    cout<<"b1: ";
    cin>>b1;
    cout<<"c1: ";
    cin>>c1;
    cout<<"a2: ";
    cin>>a2;
    cout<<"b2: ";
    cin>>b2;
    cout<<"c2: ";
    cin>>c2;

    w = a1*b2 - b1*a2;
    wx = c1*b2 - b1*c2;
    wy = a1*c2 - c1*a2;

    if(w != 0)
    {
        cout<<"x = "<<wx/w<<endl;
        cout<<"y = "<<wy/w<<endl;
    }
    else if(wx == 0 && wy == 0)
    {
        cout<<"Nieskonczenie wiele rozwiazan";
    }
    else
    {
        cout<<"Brak rozwiazan!";
    }

  return 0;
}
