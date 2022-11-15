/** kontener map - przyklad **/
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
using namespace std;

class nr_tel
{
public:
    map<string, string> dane;
    nr_tel(void) {}
    void szukaj(void);
    void dodaj(void);
    void usun(void);
    void wypisz(void);
};
//-------------------------------------------------------------------
void nr_tel::szukaj(void)
{
    string nazwa;
    cout << "WYSZUKIWANIE\n";
    cout << "Podaj nazwe miasta: ";
    cin >> nazwa;
    if (dane.count(nazwa))
        cout << dane.find(nazwa)->first << " : "
        << dane.find(nazwa)->second << endl;
    //wersja 2
    // cout << nazwa << " : " << dane[nazwa] << endl;
    else
        cout << "Brak wpisu!\n";
}
//-------------------------------------------------------------------
void nr_tel::dodaj(void)
{
    string nazwa, nr;
    cout << "DODAWANIE / EDYCJA\n";
    cout << "Podaj nazwe miasta: ";
    cin >> nazwa;
    cout << "Podaj numer: ";
    cin >> nr;
    dane[nazwa] = nr;
}
//-------------------------------------------------------------------
void nr_tel::usun(void)
{
    string nazwa;
    cout << "USUWANIE\n";
    cout << "Podaj nazwe miasta: ";
    cin >> nazwa;
    if (dane.count(nazwa))
        dane.erase(nazwa);
    else
        cout << "Brak wpisu!\n";
}
//-------------------------------------------------------------------
void nr_tel::wypisz(void)
{
    cout << endl << "Zawartosc bazy:" << endl;
    for (map<string, string>::iterator it = dane.begin(); it != dane.end(); ++it)
        cout << it->first << ": " << it->second << "\n";
    cout << endl;
}
//*******************************************************************
int main(void)
{
    nr_tel kierunkowe;
    kierunkowe.dane["Kielce"] = "41";
    kierunkowe.dane["Warszawa"] = "22";
    kierunkowe.dane["Katowice"] = "32";
    kierunkowe.dane["Radom"] = "48";
    kierunkowe.dane["Opole"] = "77";
    kierunkowe.dane["Lublin"] = "81";

    kierunkowe.wypisz();
    kierunkowe.szukaj();
    kierunkowe.wypisz();
    kierunkowe.dodaj();
    kierunkowe.wypisz();
    kierunkowe.usun();
    kierunkowe.wypisz();

    system("pause");
    return 0;
}
//*******************************************************************