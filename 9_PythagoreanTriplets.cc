//https://projecteuler.net/problem=9
//Solution: 31875000
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    c = 1000 - a - b;
    for (int i = 1; i < 1000; i++)
    {
        for (int j = i + 1; j < 1000; j++)
        {
            if (j< (1000 - i - j) && (1000 - i - j) <= 1000 && (i*i + j*j== (1000-i-j)*(1000-i-j)))
                cout << i*j*(1000 - i - j);
        }
    }
}