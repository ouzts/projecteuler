#include <iostream>
#include <cmath>

bool isPrime(long long val)
{
  for (long long i = 2; i <= ceil(sqrt(val)) && i < val; i++)
    if (val % i == 0) return false;
  return true;
}

int main()
{
  long long goal = 600851475143;
  long long ans = -1;

  for (long long i = 2; i <= ceil(sqrt(goal)); i++)
  {
    long long otherFactor = goal / i;
    if (goal % i == 0 && isPrime(i))
      ans = std::max(ans, i);
    else if (otherFactor*i == goal && isPrime(otherFactor))
      ans = std::max(ans, otherFactor);
  }

  std::cout << ans << std::endl;
  return 0;
}
