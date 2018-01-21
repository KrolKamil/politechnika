#include <iostream>

using namespace std;

int n, x, y;
int tmp = 3;
char tab[100][100];

void clear_table()
{
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           tab[i][j] = ' ';
        }
    }
}

void up()
{
    while(tab[x-1][y] != '*')
    {
        tab[x][y] = '*';
        x--;
    }

    x++;
    tmp++;
}

void right()
{
    while(tab[x][y+1] != '*')
    {
        tab[x][y] = '*';
        y++;
    }

    y--;
    tmp++;
}

void down()
{
    while(tab[x+1][y] != '*')
    {
        tab[x][y] = '*';
        x++;
    }

    x--;
    tmp++;
}

void left()
{
    while(tab[x][y-1] != '*')
    {
        tab[x][y] = '*';
        y--;
    }

    y++;
    tmp++;
}

int main()
{
	int n = 0;

	cout << "Wprowadz dlugosc boku: ";
	cin >> n;

    clear_table();

    for(int i = 0; i < n; i++)
    {
        tab[0][i] = '*';
        tab[i][n-1] = '*';
        tab[n-1][i] = '*';
    }

    y = 0;
    x = n-1;

    while(tmp < n)
    {
		if(tmp < n)
		{
			up();
		}

		if(tmp < n)
		{
			right();
		}

		if(tmp < n)
		{
			down();
		}

		if(tmp < n)
		{
			left();
		}
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           cout << tab[i][j];
        }
        cout << endl;
    }

    return 0;
}
