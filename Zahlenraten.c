#include <stdio.h>     //include(import), stdio = standard input output

int main()             //main = funktion, int für: "return 0;"
{
    int K = 10;         //Konstante Referenzzahl K
    int v;              //variable ganze zahl
    int u = 0;          //u: integer variable (u: ungültige Zahl), entweder 1 oder 0 also gleich wie boolean

    printf("\nReferenzzahl K = 10\n");          //schreibt Referenzzahl
    printf("\nGib eine Zahl ein: ");           //hier muss eine Zahl eingegeben werden (v)
    
    if (scanf("%d", &v) != 1)                //
    {
        printf("\nDas ist keine gueltige Zahl!!!\n");
        u = 0;
    }

    else
    {
        u = 1;
    };

    if (u == 1)
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