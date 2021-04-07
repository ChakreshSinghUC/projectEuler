//https://projecteuler.net/problem=3
//https://www.tutorialspoint.com/c-program-for-find-the-largest-prime-factor-of-a-number

#include <iostream>
using namespace std;

int largestPrimeFactor(long int n)
{ 
   long int div=3, ans = 0, maxFact;
   while(n!=0) {
      if(n % div !=0)
         div = div + 2;
      else {
         maxFact = n;
         n = n / div;
         if(n == 1) {
            return maxFact;
            ans = 1;
            break;
         }
      }
   }
   return -1;
}
int main() {
   long int n=600851475143;
    cout<<largestPrimeFactor(n);
   return 0;
}