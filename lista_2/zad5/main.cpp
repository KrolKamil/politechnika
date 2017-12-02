#include <iostream>
#include <cstdlib>

using namespace std;

bool tab[2001][2001];

bool wynik = true;

int x = 1000;

int y = 1000;

int direction;

int dlugosc;

int main()
{
    for(int i=0; i<2001; i++)
    {
        for(int j=0; j<2001; j++)
        {
            tab[i][j] = false;
        }
    }

    tab[x][y] = true;

    cout<<"Podaj dlugosc weza: ";
    cin>>dlugosc;

    for(int i=0; i<dlugosc; i++)
    {
        cout<<"Podaj kierunek ruchu weza: ";
        cin>>direction;

        if(direction == 1)
        {
            y++;
            if(tab[x][y] == true)
            {
                wynik = false;
            }
            else
            {
                tab[x][y] = true;
            }
        }
        else if(direction == 2)
        {
            y--;
            if(tab[x][y] == true)
            {
                wynik = false;
            }
            else
            {
                tab[x][y] = true;
            }
        }
        else if(direction == 3)
        {
            x--;
            if(tab[x][y] == true)
            {
                wynik = false;
            }
            else
            {
                tab[x][y] = true;
            }
        }
        else if(direction == 4)
        {
            x++;
            if(tab[x][y] == true)
            {
                wynik = false;
            }
            else
            {
                tab[x][y] = true;
            }
        }
        else
        {
            cout<<"Podana zla wartosc !";
            exit(0);
        }
    }
    if(wynik == true)
    {
        cout<<"Prawidlowe okreslenie weza";
    }
    else
    {
        cout<<"Nieprawidlowe okreslenie weza";
    }



    return 0;
}
