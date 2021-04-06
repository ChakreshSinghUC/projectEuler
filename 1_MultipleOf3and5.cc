//https://projecteuler.net/problem=1

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.
//Solution : 233168 
#include<iostream>

using namespace std;

 int __bad_sumofmultiplesof3and5(int n)
{
      int ret = 0;
    for(int i = 2; i<n; i++)
    {
        if(i%3==0 || i%5 == 0)
            ret+=i;
    }
    return ret;
}

int __sumoffirstNintegers(int n)
{
    return  (n>0)? n*(n+1)/2: -1;
}

int __good_sumofmultiplesof3and5(int n)
{
    

   return (__sumoffirstNintegers(n/3)*3 + __sumoffirstNintegers(n/5)*5 - __sumoffirstNintegers(n/15)*15); 

}
int main()
{
   
    //cout<<"Return Bad: "<<__bad_sumofmultiplesof3and5(1000)<<endl; 
    cout<<"Return Good:"<<__good_sumofmultiplesof3and5(1000);

}
