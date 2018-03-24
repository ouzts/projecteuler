#include <iostream>

int main()
{
    long long sumOfSquare = 0;
    long long squareOfSum = 0;
    for (unsigned int i = 1; i <= 100; i++)
    {
        sumOfSquare += i*i;
        squareOfSum += i;
    }
    squareOfSum *= squareOfSum;

    std::cout << squareOfSum - sumOfSquare << std::endl;
    return 0;
}
