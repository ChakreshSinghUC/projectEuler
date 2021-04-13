// https://projecteuler.net/problem=14
// n → n/2 (n is even)
// n → 3n + 1 (n is odd)
// Observation: Collatz number cannot be less than 1. Longest sequence is more probably for an odd base number.
//Solution: 837799

#include <iostream>
using namespace std;

long int longestCollatzSequence()
{
    int countMaxLength = 0;
    int countLength = 0;
    int N = 1000000;
    long int base = -1;
    for (long int a = 1; a < N; a += 2)
    {
        long int i = a;

        while (i > 1)
        {
            (i % 2 == 0) ? i = i / 2 : i = ((3 * i) + 1);
            countLength++;
        }
        if (countLength > countMaxLength)
            base = a;

        countMaxLength = max(countLength, countMaxLength);
        countLength=0;
    }
    return base;
}

int main()
{
    cout << "\n\nThe length of the longest Collatz sequence starts with base number: " << longestCollatzSequence();
}