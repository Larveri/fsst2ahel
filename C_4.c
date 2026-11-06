#include <stdio.h>

int main()
{   
    int l = 10;
    int h = 3;

    float q = (float)l / h;                             // "(float)l / h;" weil mind. einer der zahlen float sein muss damit es float zahl ausgibt.
    float r = (float)q * l;
    float s = (float)r * l;
    float t = (float)s * l;
    float u = (float)t * l;

    printf("> %7.1f\n", q);      // %.2f -> ".2" wenn man 2 Kommastellen will
    printf("> %7.1f\n", r);
    printf("> %7.1f\n", s);
    printf("> %7.1f\n", t);
    printf("> %7.1f\n", u);

    return 0;
}