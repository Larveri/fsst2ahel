#include <stdio.h>

int main()
{
    //"X = secret"
    //"Y = guess"

    const char secret = 'X';
    const char guess = 'Y';

    if (guess == secret)
    {
        printf("Win!!!");
    }
    else
    {
        printf("Fail...");
    }

    return 0;
}