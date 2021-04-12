// https://projecteuler.net/problem=13
// Solution: 5537376230
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <math.h>

using namespace std;

long long int  largeSum(vector<vector<int>> ln)
{
    // Printing the num
    // for (int i = 0; i < ln.size(); i++)
    // {
    //     for (int j = 0; j < ln[i].size(); j++)
    //         cout << ln[i][j] << " ";
    //     cout << endl;
    // }

    // i is the position of a digit in a number
    vector<int> __digitwisesum;
    for (int i = 0; i < 50; i++)
    {
        int __ith_column_sum = 0;
        for (int j = 0; j < 100; j++)
        {
            __ith_column_sum += ln[j][i];
        }
        __digitwisesum.push_back(__ith_column_sum);
    }

    vector<int> __sum_carry;
    int __carry_forward = 0;
    for (int i = 0; i < __digitwisesum.size(); i++)
    {
        __sum_carry.push_back((__digitwisesum[i] + __carry_forward) % 10);
        __carry_forward = (__digitwisesum[i] + __carry_forward) / 10;
    }

    //reverse the sum
    reverse(__sum_carry.begin(), __sum_carry.end());

    long long int  __first_10_digits = __carry_forward, i = 0;

    while (__first_10_digits < pow(10, 9))
    {
        __first_10_digits = __first_10_digits * 10 + __sum_carry[i];
        i++;
    }

   
    return __first_10_digits;
}

vector<vector<int>> __prepareInputNum()
{
    char S;
    ifstream nameFileout;
    vector<int> vec;
    vector<vector<int>> largeNums;
    int length_counter = 0;
    nameFileout.open("13_input_Number.txt");
    while (nameFileout >> S)
    {
        //cout << S<<endl;
        vec.push_back(S - 48);
        length_counter++;

        if (length_counter % 50 == 0)
        {
            length_counter = 0;
            // store each number in reverse order of its digits.
            reverse(vec.begin(), vec.end());
            largeNums.push_back(vec);
            vec.clear();
        }
    }

    nameFileout.close();

    return largeNums;
}
int main()
{

    cout << "Answer: " << largeSum(__prepareInputNum());
}