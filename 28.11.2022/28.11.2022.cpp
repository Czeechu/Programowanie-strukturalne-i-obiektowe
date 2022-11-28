#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream plik1;
    int suma = 0, liczba = 0;
    string linia("");
    plik1.open("dane.   txt", ios::in);
    
    if (plik1.is_open())
    {
        while (!plik1.eof())
        {
            getline(plik1, linia);
            stringstream (linia) >> liczba;
            cout << " + " << liczba << endl;
            suma += liczba;
        }
        plik1.close();
    }
    else
        cout << "Nie udalo sie otworzyc pliku!" << endl;
    cout << " = " << suma;
    cout << endl;
    cout << "Koniec!" << endl;
    return 0;
}
