#include <RNG.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdlib.h>
using namespace std;

int seed = 0;
long counter = 0;
long long result;
RNG::RNG()
{
    time_t clok = time(nullptr);
    seed = (int)localtime(&clok);
    int man = (abs(seed*seed/2+10293));
    while(man>999999||man<100000)
    {
        man = man%1000000;
        if(man<100000)
        {
            man*=11;
        }
    }
    seed = man;
    result = seed;
}
RNG::RNG(int sed)
{
    seed = sed;
    result = seed;
}

long long RNG::gen()
{
    counter++;
    result = result*result+167349;
    result = (long long)(result%1000000)+1;
    return result;
}
long RNG::gen(long Min, long Max)
{
    long ret = gen()%(Max+1)+Min;
    return ret;
}
