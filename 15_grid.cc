// https://projecteuler.net/problem=15
// 40C20 can be calculated at https://keisan.casio.com/exec/system/1223621784
#include <iostream>
using namespace std;
// 40C20 is the answer as we need to select 20 bits where we want to take right and 20 bits where we have to have downs. We
int main()
{
    unsigned long long ret = 1;
    for (int i = 1; i <= 20; i++)
        ret *= (20 + i) / i; //wont work really
    cout << ret;
    //right now this idea is not working.. I will come back to this later 
}