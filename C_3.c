#include <stdio.h> //für printf

int main(void)
{
    int alter = 15;                                     
    printf("Ich bin %d Jahre alt.\n", alter);

    int b = 5;
    int h = 7;

    printf("%d * %d = %d\n", b, h, b * h);

    return 0;
}

// %d ist ein Platzhalter für eine Ganze Zahl
// Variablen definieren: Datentyp, Name, Wert