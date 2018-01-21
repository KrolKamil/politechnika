#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//zmienne plikowe
fstream plik;
fstream plik_szyfr;

//funkcje szyfrujace
string zamiana_systemu(char znak, int system)
{
    string slowo = "";
    string szyfr = "";

    int reszta;
    int dl_szyfru;

    while(znak!=0)
    {
        reszta = znak % system;
        slowo = slowo + char(reszta + 48);
        znak = znak / system;
    }

    dl_szyfru  = slowo.length();

    for(int i=dl_szyfru-1; i>=0; i--)
    {
        szyfr = szyfr + slowo[i];
    }

    return szyfr;
}

string usuniecie_spacji(string dane)
{
    int dlugosc = dane.length();
    string wynik="";
    for(int i=0; i<dlugosc; i++)
    {
        if(dane[i] != ' ')
        {
            wynik = wynik + dane[i];
        }
    }

    return wynik;
}

void szyfrowanie(string dane)
{
    int system = 2;
    int dlugosc_danych;
    dane = usuniecie_spacji(dane);
    dlugosc_danych = dane.length();

    for(int i=0; i<dlugosc_danych; i++)
    {
        if(i>0)
        {
            system = (dane[i-1] % 8) + 2;
        }
       plik_szyfr<<zamiana_systemu(dane[i], system)<<" ";
    }
}

//funkcje odszyfrujace

char odszyfrowanie_znaku(string znak, int system)
{
    int dlugosc_znaku = znak.length();

    int wynik = 0;

    for(int i=0; i<dlugosc_znaku; i++)
    {
        wynik = wynik * system + (znak[i]-48);
    }

    wynik = (char)wynik;
    return wynik;
}

void odszyfrowywanie(string dane)
{
    char odszyfrowany_znak;

    int system = 2;

    string znak="";

    int dlugosc_danych = dane.length();

    int i=0;
    while(i<dlugosc_danych)
    {
        while(dane[i] != ' ' && i<dlugosc_danych)
        {
            znak = znak + dane[i];
            i++;
        }

        if(i>0)
        {
            system = ((odszyfrowany_znak-48) % 8) + 2;
        }

        odszyfrowany_znak = odszyfrowanie_znaku(znak, system);
        plik<<odszyfrowany_znak;
        znak = "";

        i++;
    }
}

int main()
{
    //szyfrowanie
    string wiersz_danych;

    plik.open("tekst.txt", ios::in);
    plik_szyfr.open("szyfr.txt", ios::out);

    getline(plik, wiersz_danych);

    szyfrowanie(wiersz_danych);

    plik.clear();
    plik.close();
    plik_szyfr.clear();
    plik_szyfr.close();

    //odszyfrowanie

    plik_szyfr.open("szyfr.txt", ios::in);
    plik.open("odszyfrowane.txt", ios::out);

    getline(plik_szyfr, wiersz_danych);

    odszyfrowywanie(wiersz_danych);

    plik.close();
    plik_szyfr.close();
    cout<<"Program dokonal przeksztalcen.";
}
