#include <iostream>
#include <string>

bool isPalindrome(int val)
{
  std::string s = std::to_string(val);
  auto end = s.size() - 1;
  for (auto i = 0; i < s.size() / 2; i++)
  {
    if (s[i] != s[end])
    {
      return false;
    }
    end--;
  }

  return true;
}

int main()
{
  int result = -1;
  int ans = -1;
  bool foundAnswer = false;

  for (unsigned int i = 999; i >= 100; i--)
  {
    for (unsigned int j = i; j >= 100; j--)
    {
      result = i*j;
      if (isPalindrome(result)) ans = std::max(ans, result);
    }
  }

  std::cout << ans << std::endl;
  return 0;
}
