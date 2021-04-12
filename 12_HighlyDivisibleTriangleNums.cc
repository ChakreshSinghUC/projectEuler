// https://projecteuler.net/problem=12
// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55...
// ith number in the series = i*(i+1)/2.

#include <iostream>
using namespace std;

class BRUTE_FORCE_Solution
{ //this won't work as its too slow
public:
    int _numberOfDivisors(long long int a)
    {
        if (a <= 0)
            return -1;
        int count = 0;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
                count++;
        }

        return count;
    }

    int highlyDivisibleTriangleNumber()
    {
        bool _notFound = false;
        long long int i = 1;
        while (!_notFound)
        {
            if (_numberOfDivisors(i * (i + 1) / 2) >= 500)
            {
                cout << endl;
                return i * (i + 1) / 2;
            }
            else
            {
                cout << i << ",";
                i += 100;
            }
        }
        return -1;
    }
};

class BETTER_Solution
{
public:
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

    int highlyDivisiableTriangleNumber()
    {
        
    }
} int main()
{
    BRUTE_FORCE_Solution obj;
    cout << obj.highlyDivisibleTriangleNumber();
}