#include <iostream>
#include <cmath>

int numDivisors(int val)
{
    int rv = 0;
    for (int i = 1; i <= sqrt(val); i++)
    {
        if (i == sqrt(val)) rv+=1;
        else if (val%i == 0) rv+=2;
           
    }
    return rv;
}

int triangularNum(int seq)
{
    return (seq*(seq+1)/2);
}

int main()
{
    int seq=1;
    while (numDivisors(triangularNum(seq)) < 500) seq++;

    std::cout << triangularNum(seq) << std::endl;
    
    return 0;
}
