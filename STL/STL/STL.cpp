#include <cstdlib>
#include <list>
#include <string>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class stringlist
{
public:
	list<string> dane;
	stringlist(void) { }
	void wypisz(void);
	void wstaw(int pozycja, string teks);
};
//---------------------------------------------------------------------------
void stringlist::wypisz(void)
{
	cout << "Rozmiar: " << dane.size() << "\t Dane:\t";
	if (dane.empty())
		cout << "Lista pusta!";
	else
		for (list<string>::iterator it = dane.begin(); it != dane.end(); ++it)
			cout << *it << "\t";
	cout << endl;
}
//---------------------------------------------------------------------------
void stringlist::wstaw(int pozycja, string tekst)
{
	list<string>::iterator it = dane.begin();
	for (int i = 0; i < pozycja; ++i)
		++it;
	dane.insert(it, tekst);
}
//---------------------------------------------------------------------------

int main(void)
{
	stringlist kolory;
	kolory.wypisz();

	cout << "push_back(\"black\")" << endl;
	kolory.dane.push_back("black");
	kolory.wypisz();
	cout << "push_back(\"pink\")" << endl;
	kolory.dane.push_back("pink");
	kolory.wypisz();

	cout << "push_front(\"blue\")" << endl;
	kolory.dane.push_front("blue");
	kolory.wypisz();
	cout << "wstaw(2,\"green\")" << endl;
	kolory.wstaw(2, "green");
	kolory.wypisz();

	cout << "insert(begin(),\"white\")" << endl;
	kolory.dane.insert(kolory.dane.begin(), "white");
	kolory.wypisz();

	cout << "push_front(\"green\")" << endl;
	kolory.dane.push_front("green");
	kolory.wypisz();

	cout << "sort()" << endl;
	kolory.dane.sort();
	kolory.wypisz();
	cout << "reverse()" << endl;
	kolory.dane.reverse();
	kolory.wypisz();

	cout << "pop_front()" << endl;
	kolory.dane.pop_front();
	kolory.wypisz();

	cout << "pop_back()" << endl;
	kolory.dane.pop_back();
	kolory.wypisz();

	cout << "clear()" << endl;
	kolory.dane.clear();
	kolory.wypisz();

	system("pause");
	return 0;
}