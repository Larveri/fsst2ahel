#include <stdio.h>

void dump(int a[])
{
    a[0] = 8888;
    //printf("%d\n", sizeof(a) / sizeof(int));
    
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        //printf("%d\n", a[i]);
    }
}

int main()
{
    int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    dump(a);
    printf("%d\n", a[0]);
    return 0;
}