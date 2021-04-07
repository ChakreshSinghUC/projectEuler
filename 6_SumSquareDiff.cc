//https://projecteuler.net/problem=6

#include<iostream>

using namespace std;

int func(int n)
{
    return n*(n+1)*(3*n*n - n -2)/12; 
}
int main()
{
    int n = 100;

    cout<<func(n);
}