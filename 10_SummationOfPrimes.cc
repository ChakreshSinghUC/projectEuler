//https://projecteuler.net/problem=10

#include<iostream>
#include<math.h>

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

long int firstNprimeSum(int N)
{
    long int sum=0;
    for(int i =1;i<N;i++)
    {
        if(isPrime(i))
            sum+= i;
    }
    return sum;
}
int main()

{

    int N = 2000000;
    cout<<"Prime Summation for first "<< N << " Primes : "<<firstNprimeSum(N);
}