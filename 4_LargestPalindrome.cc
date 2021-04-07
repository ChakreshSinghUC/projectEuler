//https://projecteuler.net/problem=4

#include<iostream>
#include<math.h>

using namespace std;

bool isPalindrome(int n)
{
    int check = 0;
    int temp = n;
    while(n>1){
        check = check*10 + (n%10);
        n/=10;
    }

    return (check == temp)?1:0;
}
void largestPalindrome(int n)
{
    int p =-1;
    int _min = pow(10,n-1), _max = pow(10,n);
    for(int i = _min; i< _max; i++)
    {
        for(int j = _min;j < _max; j++)
            {
                if(isPalindrome(i*j)) p = max(p, i*j);
            }
    }
    cout<<p;
}
int main()
{
largestPalindrome(3);
}