#include <iostream>
#include <stack>


int main()
{
    int decNumber = 233;
    std::cout<< decNumber << " DEC = ";
    std::stack<unsigned> bits;

    while (decNumber > 0)
    {
        bits.push(decNumber % 2);
        decNumber /= 2;
    }

    while (!bits.empty())
    {
        std::cout << bits.top();
        bits.pop();
    }
    std::cout << " BIN" << std::endl;

    std::cout << "\n-END-\n";
}

