#include <iostream>

int main() {
  for (int i = 2520; ; i+=20)
  {
    bool isAnswer = true;
    for (int j = 2; j <= 20; j++)
    {
      if (i % j != 0) isAnswer = false;
    }
    if (isAnswer)
    {
      std::cout << i << std::endl;
      break;
    }

  }
  return 0;
}
