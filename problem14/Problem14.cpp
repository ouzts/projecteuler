#include <iostream>

long long Collatz(long long val)
{
    long long orig = val;
    long long steps = 1;
    while (val != 1)
    {
        if (val % 2 == 0) val /= 2;
        else val = 3*val + 1;
        steps++;
    }
    return steps;
}

int main()
{
    long long longestChain = 0;
    long long res = -1;
    for (long long i = 1; i < 1000000; i++)
    {
        long long coll = Collatz(i);
        if (coll > longestChain) {
            longestChain = coll;
            res = i;
        }
    }
    std::cout <<res << std::endl;

    return 0;
}
