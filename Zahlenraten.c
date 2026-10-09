#include <stdio.h>                     

int main()
{
    float K = 10.0;
    float v;
    printf("\nReferenzzahl K = 10\n");
    printf("\nGib eine Zahl ein : ");
    scanf("\n%f", &v);

    if (K < v)
    {
        printf("\nDie eingegebene Zahl ist groesser als die Referenzzahl!\n");
    }
    else if (K == v)
    {
        printf("\nDie Referenzzahl ist gleich gross wie die eingegebene Zahl!\n");
    }
    else
    {
        printf("\nDie eingegebene Zahl ist kleiner als die Referenzzahl!\n");
    }
    return 0;
}