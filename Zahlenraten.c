#include <stdio.h>

int main()
{
    int K = 10;
    int v;
    int L = 0;
    printf("\nReferenzzahl K = 10\n");
    printf("\nGib eine Zahl ein : ");
    
    if (scanf("%d", &v) != 1)
    {
        printf("\nDas ist keine gueltige Zahl!!!\n");
        L = 0;
    }

    else
    {
        L = 1;
    };

    if (L == 1)
    {
        if (v < K)
        {
        printf("\nDie eingegebene Zahl ist kleiner als die Referenzzahl!\n");
        }
    
        else if (v == K)
        {
            printf("\nDie Referenzzahl ist gleich gross wie die eingegebene Zahl!\n");
        }
    
        else if (v > K)
        {
            printf("\nDie eingegebene Zahl ist groesser als die Referenzzahl!\n");
        };
    }
    
    return 0;
}