#include <stdio.h>


int main()
{
    const char secret[] = "REDBULL4EVER";
    char guess;

    printf("\nBuchstabe: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("\nUngueltige Eingabe\n");
        return 1;
    }

    int hits = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++)
    {
        if ((secret[i]) == guess)
        {
            hits++;
        }
    }

    printf("Treffer: %d", hits);

    
    return 0;
}