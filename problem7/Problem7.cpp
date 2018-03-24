#include <iostream>
#include <cmath>

bool isPrime(long long val)
{
  for (long long i = 2; i <= ceil(sqrt(val)); i++)
  {
    if (val % i == 0) return false;
  }
  return true;
}

int main()
{
    int numPrimes = 1;
    for (int i = 3; ; i++)
    {
        if (isPrime(i)) numPrimes++;
        if (numPrimes == 10001)
        {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
