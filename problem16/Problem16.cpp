#include <iostream>
#include <cmath>
int exponent = 1000;
const int NUM_DIGITS = 1000;

int sumDigits(int *A)
{
    int sum = 0;
    for (int i = 0; i < NUM_DIGITS; i++) sum += A[i];
    return sum;
}

void exponentiate(int *A, int exp)
{
    int carry = 0;
    for (int j = 0; j < exp; j++)
    {
        for (int i = NUM_DIGITS-1; i >= 0; i--)
        {
            int val = A[i] * 2 + carry;
            A[i] = val % 10;
            carry = val / 10;
        }
    }

}


int main()
{
    int A[NUM_DIGITS] = {0};
    A[NUM_DIGITS-1] = 1;
    exponentiate(A, exponent);
    std::cout << sumDigits(A) << std::endl;
    return 0;
}
