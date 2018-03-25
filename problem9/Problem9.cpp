#include <iostream>

int main()
{
  for (int a = 1; a < 998; a++)
  {
    for (int b = 2; b < 999; b++)
    {
      for (int c = 3; c < 1000; c++)
      {
        if (a+b+c == 1000)
        {
          if (a*a+b*b == c*c)
          {
            std::cout << a << " " << b << " " << c << std::endl;
            std::cout << a*b*c << std::endl;
            return 0;
          }
        }
      }
    }
  }

  return 0;
}
