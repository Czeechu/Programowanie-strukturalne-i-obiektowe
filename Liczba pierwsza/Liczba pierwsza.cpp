/** Sito Eranostenesa **/

#include <iostream>
#include <cmath>

using namespace std;

const int N = 100;  // rozmiar tablicy (koniec zakresu)

int main()
{
    bool dane[N] = {};
    for (int i = 2; i < N; ++i)
    {
        dane[i] = true;
    }

    for (int i = 2; i < sqrt(N); ++i)
    {
        if (dane[i] == true)
        {
            for (int j = i + i; j < N; j += i)
            {
                dane[j] = false;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (dane[i])  // lub (dane[i] == true) -> true = 1 lub dowolna wartosc wieksza od zera, false = 0
        {
            cout << i << " ";
        }
    }
    cout << "\n";
    // ponizej wypisanie kontrolnego zestawu liczb pierwszych
    cout << "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97\n";

    cout << "\nKoniec" << endl;
    return 0;
}
