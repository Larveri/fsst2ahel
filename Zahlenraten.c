#include <stdio.h>                     

int main()
{
    int K = 10;
    int v;
    printf("\nReferenzzahl K = 10");
    printf("\nGib eine Zahl ein : ");
    scanf("\n%d", &v);

    if (K < v)
    {
        printf("Die eingegebene Zahl ist groesser als die Referenzzahl!\n");
    }

    else if (K == v)
    {
        printf("Die Referenzzahl ist gleich gross wie die eingegebene Zahl!\n");
    }

    else
    {
        printf("Die eingegebene Zahl ist kleiner als die Referenzzahl!\n");
    }

    return 0;
}