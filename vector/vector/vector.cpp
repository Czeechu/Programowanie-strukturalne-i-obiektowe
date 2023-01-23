// vector.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t[] = { 5, 1, 3, 7, 9, 4 };

    for (int val : t)
    {
        cout << val << " ";
    }
    cout << endl;

    for (int& val : t)
    {
        val = 1;
    }

    for (int val : t)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "\n-----------------------------\n\n" << endl;

    vector<int> v;
    for (size_t i = 0; i < 10; i++)
    {
       v.push_back(i + 5);
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}