#include <iostream>

int main() {
  int sum = 0;
  for (auto i = 3; i < 1000; i++)
    if (i%3 == 0 || i%5 == 0) sum+= i;
  std::cout << sum << std::endl;
  return EXIT_SUCCESS;
}
