#include <iostream>

using namespace std;

unsigned int n;
int m;

void show()
{
    string wynik = "";
    int pomoc = 1;
    while(pomoc<=n)
    {
        if(n&pomoc)
        {
            wynik = "1" + wynik;
        }
        else
        {
            wynik = "0" + wynik;
        }
        pomoc = pomoc*2;
    }
    cout<<wynik<<endl;
}

void a()
{
    int index = 1;
    for(int i=1; i<m; i++)
    {
        index = index * 2;
    }
    n = n | index;
}

void b()
{
    int index = 1;
    for(int i=1; i<m; i++)
    {
        index = index * 2;
    }
    index = ~index;
    n = n & index;
}

void c()
{
    int index = 1;
    for(int i=1; i<m; i++)
    {
        index = index * 2;
    }

    if(n & index)
    {
        index = ~index;
        n = n & index;
    }
    else
    {
        n = n | index;
    }
}

void d()
{
    n = n >> m;
}

void e()
{
    n = n << m;
}

int main()
{
    cout<<"Podaj licze(n): ";
    cin>>n;
    cout<<"Podaj liczbe z zakresu <1,32>(m) : ";
    cin>>m;
    cout<<endl;

    cout<<"WARTOSI POCZATKOWE: "<<endl;
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();
    cout<<endl;

    //zapalanie m-tego bitu
    cout<<"--------A--------"<<endl;
    cout<<"Zapalanie m-tego bitu:"<<endl;
    a();
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();

    //gaszenie m-tego bitu
    cout<<"--------B--------"<<endl;
    cout<<"Gaszenie m-tego bitu:"<<endl;
    b();
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();

    //negacja m-tego bitu liczby n
    cout<<"--------C--------"<<endl;
    cout<<"Negacja m-tego bitu liczby n:"<<endl;
    c();
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();

    //przesuwa bity liczby n w prawo o m pozycji
    cout<<"--------D--------"<<endl;
    cout<<"Przesuwa bity liczby n w prawo o m pozycji:"<<endl;
    d();
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();

    // przesuwa bity liczby n w lewo o m pozycji
    cout<<"--------E--------"<<endl;
    cout<<"Przesuwa bity liczby n w lewo o m pozycji:"<<endl;
    e();
    cout<<"Dziesietny: "<<n<<endl;
    cout<<"Binarny: ";
    show();

    return 0;
}
