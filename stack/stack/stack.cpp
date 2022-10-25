#include <cstdlib>
#include <iostream>
#include <stack>
using namespace std;

//---------------------------------------------------------------------------
int main(void)
{
	stack<int> stos;
	if (stos.empty())
		cout << "Stos pusty!";
	cout << "\tRozmiar: " << stos.size() << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "push " << i * 100 << endl;
		stos.push(i * 100);
		cout << "Na stosie: " << stos.top() << "\tRozmiar: " << stos.size() << endl;
	}
	while (!stos.empty())
	{
		cout << "pop " << stos.top() << endl;
		stos.pop();
		if (!stos.empty())
			cout << "Na stosie: " << stos.top() << "\tRozmiar: " << stos.size() << endl;
	}
	if (stos.empty())
		cout << "Stos pusty!";
	cout << "\tRozmiar: " << stos.size() << endl;
	system("pause");
	return 0;
}