#include <stdio.h>


int main()
{
    const char secret = 'X';
    char guess;

    printf("\nGib ein Buchstabe ein: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("\nUngueltige Eingabe\n");
    }

    if (guess == secret)
    {
        printf("\nWin!!!\n");
    }
    else
    {
        printf("\nFail...\n");
    };
    
    return 0;
}