#include <stdio.h>

int main()
{
    float b; 
    float h;
    float a;

    printf("\nBreite ist (cm) : ");
    scanf("%f", &b);
    printf("Hoehe ist (cm) : ");
    scanf("%f", &h);

    if (b == h)
    {
        printf("Das ist ein Quadrat! a ist : ");
        scanf("%f", &a);

        float Uq = 4 * a;
        float Aq = a * a;

        printf("\nU = 4 * %.2f\n", a);
        printf("A = %.2f * %.2f\n\n", a, a);

        printf("Der Umfang ist %.2fcm\n", Uq);
        printf("Die Flaeche ist %.2fcm^2\n", Aq);
    }

    else
    {
    float Ur = 2 * (b + h);
    float Ar = b * h;

    printf("\nU = (2 * %.2fcm) + (2 * %.2fcm)\n", h, b);
    printf("A = %.2fcm * %.2fcm\n\n", b, h);

    printf("Der Umfang ist %.2fcm\n", Ur);
    printf("Die Flaeche ist %.2fcm^2\n", Ar);
    }

    return 0;
}