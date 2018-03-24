#include <iostream>

int main()
{
  int num1 = 1;
  int num2 = 2;
  int sum = num2;

  do
  {
    auto fibVal = num1+num2;
    if (fibVal % 2 == 0) sum += fibVal;
    num1 = num2;
    num2 = fibVal;
  } while (num1+num2 <= 4e6);

  std::cout << sum << std::endl;
  return 0;
}
