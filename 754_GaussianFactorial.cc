//https://projecteuler.net/problem=754

#include<iostream>

using namespace std;


bool RelativelyPrime (int a, int b) { // Assumes a, b > 0
  for ( ; ; ) {
    if (!(a %= b)) return b == 1 ;
    if (!(b %= a)) return a == 1 ;
  }
}

int gauss_fact(int n)
{
    int ret = 1;
    for(int i =1;i<n;i++)
    {
           if( RelativelyPrime(i, n))
               ret*=i;
    }
    return ret;
}

long long int G(int n)
{
    long long int ret =1;
    for(int i = 1;i <=n; i++)
        ret*=gauss_fact(i);

return ret/1000000007; 
}
int main()
{ 
    cout<<G(100000000); 
}