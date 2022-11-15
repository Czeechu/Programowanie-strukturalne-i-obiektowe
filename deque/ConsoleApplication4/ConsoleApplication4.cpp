#include<cstdlib>
#include<iostream>
#include<deque>
using namespace std;

ostream & operator<<(ostream & ekran, deque<int> dane)
{
	ekran << "Rozmiar: " << dane.size() << "\tDane: ";
	for (unsigned int id = 0; id < dane.size(); ++id)
		ekran << dane[id] << " ";
	ekran << endl;
	return ekran;
	}

int main()
{
	cout << "*** Kontener STL \"deque\" ***\n";
	deque<int> d;
	for (int i = 0; i <= 6; ++i)
		if (i % 2)
		d.push_back(i);
		else
		d.push_front(i);
	cout << " d: " << d;
	d.pop_back();
	cout << "d.pop_back()\n";
	cout << " d: " << d;
	d.pop_front();
	cout << "d.pop_front()\n";
	cout << " d: " << d;
	for (int i = 0; d.begin() + i != d.end(); ++i)
		cout << "*(d.begin()+" << i << ") = " << *(d.begin() + i) << endl;
	for (int i = 0; d.rbegin() + i != d.rend(); ++i)
		cout << "*(d.rbegin()+" << i << ") = " << *(d.rbegin() + i) << endl;
	deque<int> d2;
	d2.assign(6, 1);
	cout << "d2: " << d2;
	cout << " d: " << d;
	d.swap(d2);
	cout << "d.swap(d2)\n";
	cout << "d2: " << d2;
	cout << " d: " << d;
	d.insert(d.begin() + 2, 0);
	cout << "d.insert(d.begin()+2,0)\n";
	cout << " d: " << d;
	d.insert(d.begin() + 2, 3, 2);
	cout << "d.insert(d.begin()+2,3,2)\n";
	cout << " d: " << d;
	d.erase(d.begin(), d.begin() + 2);
	cout << "d.erase(d.begin(),d.begin()+2)\n";
	cout << " d: " << d;
	d.clear();
	cout << "d.clear()\n";
	cout << " d: " << d;
	system("pause");
	return 0;
}

