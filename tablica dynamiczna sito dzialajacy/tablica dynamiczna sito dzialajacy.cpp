#include <iostream>
#include <cmath>

using namespace std;

void sito(int n) {
    bool* dane = new bool[n + 1];
    for (int i = 0; i < n; i++) {
        dane[i] = true;
    }

    for (int p = 2; p <= sqrt(n); p++)
    {
        if (dane[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                dane[i] = false;
            }
        }
    }

    for (int i = 2; i < n; i++) {
        if (dane[i] == true) {
            cout << i << " ";
        }
    }
    delete[] dane; // zwalniamy pamiec
}


int main()
{
    int n;
    cout << "Podaj liczbe naturalna n: ";
    cin >> n;
    cout << "Liczby pierwsze za zakresu od 2 do " << n << ": ";
    sito(n);

    cout << "\nKoniec" << endl;
    return 0;
}