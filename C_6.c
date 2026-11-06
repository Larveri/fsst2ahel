#include <stdio.h>

int main(void)
{
    int S1, S2, S3;
    printf("S1 (0 or 1): ");
    scanf("%d", &S1);
    printf("S2 (0 or 1): ");
    scanf("%d", &S2);
    printf("S3 (0 or 1) : ");
    scanf("%d", &S3);

    if (S1 == 1 || S2 == 1 && S3 == 1)
    {
        printf("Lampe leuchtet!");
    }

    else
    {
        printf("Lampe leuchtet nicht...");
    }

    return 0;
}