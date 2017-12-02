#include <iostream>
#include <cstdlib>
using namespace std;
int ile;
 string pesel;
 string tab[11];
 int tab1[11];
int suma;
int main()
{
cin>>ile;
for(int u=0;u<ile;u++)
{


        cin>>pesel;//wpisuje nr pesel
        for(int j=0; j<11; j++)//petla wsadzajaca pojedyncze char
        {
            tab[j]=pesel[j];
        }


        for(int l=0; l<11; l++)//zamiana na int
        {
            tab1[l]=atoi(tab[l].c_str());
        }
        tab1[0]=tab1[0]*1;
        tab1[1]=tab1[1]*3;
        tab1[2]=tab1[2]*7;
        tab1[3]=tab1[3]*9;
        tab1[4]=tab1[4]*1;
        tab1[5]=tab1[5]*3;
        tab1[6]=tab1[6]*7;
        tab1[7]=tab1[7]*9;
        tab1[8]=tab1[8]*1;
        tab1[9]=tab1[9]*3;
        tab1[10]=tab1[10]*1;

        for(int m=0; m<11; m++)
        {
            suma=suma+tab1[m];
        }
        if(suma%10==0)
        cout<<"D"<<endl;
        else
        cout<<"N"<<endl;
        suma=0;
}

    return 0;
}
