#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// tylko dzielenie calkowite
// zaokragla do calkowitych przez typ int

int main(int argc, char* argv[])
{
    if(argc != 4)
    {
        cout<<"Wprowadzono niepoprawne dane!";
        exit(0);
    }
    else
    {
        switch(argv[2][0])
        {
        case '+':
            cout<<"Wynik: "<<(argv[1][0] -48) + (argv[3][0] - 48);
            break;
        case '-':
            cout<<"Wynik: "<<(argv[1][0] -48) - (argv[3][0] - 48);
            break;
        case 'x':
            cout<<"Wynik: "<<(argv[1][0] -48) * (argv[3][0] - 48);
            break;
        case '/':
            if(argv[3][0] == '0')
            {
                cout<<"Nie mozna dzielic przez 0";
                break;
            }
            else
            {
                cout<<"Wynik: "<<(argv[1][0] - 48) / (argv[3][0] - 48);
                break;
            }
        default:
            cout<<"Podana zly rodzaj dzialania.";
            break;
        }
    }
    return 0;
}
