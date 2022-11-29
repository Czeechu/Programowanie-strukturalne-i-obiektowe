#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

int main()
{
    ifstream plik1;
    double wynik = 0, liczba = 0;
    char dzialanie = ' ';
    string linia("");
    plik1.open("dane1.txt", ios::in);
    if (plik1.is_open())
    {
        while (!plik1.eof())
        {
            getline(plik1, linia);
            if (linia.length() >= 3)
            {
                dzialanie = linia[0];
                linia = linia.substr(2, string::npos);
                stringstream(linia) >> liczba;
                cout << dzialanie << " " << liczba << endl;
                switch (dzialanie)
                {
                case '+':
                    wynik += liczba;
                    break;
                case '-':
                    wynik -= liczba;
                    break;
                case '*':
                    wynik *= liczba;
                case '/':
                    if (liczba != 0.)
                    {
                        wynik /= liczba;
                    }
                    break;

                }
            }
        }
        plik1.close();
    }
    else
        cout << "Nie udalo sie otworzyc pliku!" << endl;
    cout << "= " << wynik;
    cout << endl;
    cout << "Koniec!" << endl;
    return 0;
}