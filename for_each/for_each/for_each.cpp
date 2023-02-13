#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

void myfunction(int i) {    //function
    std::cout << ' ' << i;
}

struct myclass {            // fucntion object type:
    void operator() (int i) { std::cout << ' ' << i; }
} myobjetct;

int main()
{
    std::vector<int> v{ 10, 20, 30 };

    std::cout << "v: ";
    for_each(v.begin(), v.end(), myfunction);
    std::cout << '\n';

    // or:
    std::cout << "v: ";
    for_each(v.begin(), v.end(), myobjetct);
    std::cout << '\n';

    return 0;
}