#include <iostream>

int NumberLettersOnes(int num)
{
    if (num == 0) return 0;
    else if (num == 1) return 3;
    else if (num == 2) return 3;
    else if (num == 3) return 5;
    else if (num == 4) return 4;
    else if (num == 5) return 4;
    else if (num == 6) return 3;
    else if (num == 7) return 5;
    else if (num == 8) return 5;
    else if (num == 9) return 4;
    else return -1;
}

int NumberLettersTens(int num)
{
    if (num == 0) return 0;
    else if (num == 1) return 3;
    else if (num == 2) return 6;
    else if (num == 3) return 6;
    else if (num == 4) return 5;
    else if (num == 5) return 5;
    else if (num == 6) return 5;
    else if (num == 7) return 7;
    else if (num == 8) return 6;
    else if (num == 9) return 6;
    else return -1;
}

int NumberLettersHundreds(int num)
{
    if (num == 0) return 0;
    else return 7+NumberLettersOnes(num%10);
}

int NumberLettersTeens(int num)
{
    if (num >= 100) num = num % 100;
    if (num == 10) return 3;
    else if (num == 11) return 6;
    else if (num == 12) return 6;
    else if (num == 13) return 8;
    else if (num == 14) return 8;
    else if (num == 15) return 7;
    else if (num == 16) return 7;
    else if (num == 17) return 9;
    else if (num == 18) return 8;
    else if (num == 19) return 8;
    else return -1;
}

int NumberLetters(int num)
{
    if (num == 1000) return 11;

    int ones,tens,hundreds;
    ones = NumberLettersOnes(num % 10);
    tens = NumberLettersTens((num % 100) / 10);

    if ((num%100)/10 == 1) {
        tens = NumberLettersTeens(num);
        ones = 0;
    }
    else tens = NumberLettersTens((num % 100) / 10);

    hundreds = NumberLettersHundreds(num / 100);
    int ands = hundreds > 0 && num % 100 != 0 ? 3 : 0;
    return ones+tens+hundreds+ands;
}

int NumberLetterCountsInRange(int begin, int end)
{
    int sum = 0;
    for (int i = begin; i <= end; i++) sum += NumberLetters(i);
    return sum;
}

int main()
{
    std::cout << NumberLetterCountsInRange(1, 1000) << std::endl;
    return 0;
}
