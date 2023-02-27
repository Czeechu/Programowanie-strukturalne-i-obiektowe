#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	/*
	cout << "Instrukcja if zad1" << endl;
	int liczba = 0;
	cout << "Podaj liczbe: ";
    cin >> liczba;
	if (liczba %2== 0)
	{
		cout << "Liczba parzysta";
	}
	else if(liczba %2!=0) {
		cout << "Liczba nieparzysta";
	}

    cout << endl;

	int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    if (a > 0) {
        cout << "Liczba dodatnia";
    }
    else if (a == 0)
        {
            cout << "Liczba jest zerem";
        }
    else
            cout << "Liczba ujemna";

	cout << endl;

	int rok;

	cout << "Podaj rok: ";
	cin >> rok;

	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
		cout << "Rok " << rok << " jest przestepny.";
	else
		cout << "Rok " << rok << " nie jest przestepny";

	cout << endl;
	
	int parametr;
	cout << "Podaj liczbe: ";
	cin>> parametr;
	switch (parametr)
	{
	case 1:
		cout << "niedostateczny";
		break;
	case 2:
		cout << "dopuszczający";
		break;
	case 3:
		cout << "dostateczny";
		break;
	case 4:
		cout << "dobry";
		break;
	case 5:
		cout << "bardzo dobry";
		break;
	case 6:
		cout << "celujący";
		break;
	}
	
	cout << endl;

	cout << "Petla for" << endl; 
	
	for (int i = 1; i < 11; i++)
	{
		cout << i << "*" << i << " = " << i * i << endl;
	}
	*/
	
	string haslo;
	cout << "Podaj haslo: ";
	cin >> haslo;
	if (haslo == "abc123")
	{
		cout << "haslo poprawne";
	}
	else {
		cout << "haslo niepoprawne";
	}



	return 0;
}