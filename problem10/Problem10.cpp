#include <iostream>
#include <cmath>

bool isPrime(int val)
{
  if (val == 2) return true;
  for (int i = 2; i <= sqrt(val); i++)
  {
    if (val % i == 0) return false;
  }
  return true;
}

int main()
{
  long long sum = 0;
  for (unsigned int i = 2; i < 2000000; i++)
  {
    if (isPrime(i)) sum+= i;
  }
  std::cout << sum << std::endl;

  return 0;
}
