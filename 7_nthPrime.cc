
//https://projecteuler.net/problem=7
//Solution: 104743
#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

 int findNthPrime(int n)
{

    int prime = 1;

     int i = 2;
    while (prime <= n)
    {
        if (isPrime(i))
            prime++;
        i++;
    }
    return --i;
}
int main()
{ 
    cout << findNthPrime(10001);
}