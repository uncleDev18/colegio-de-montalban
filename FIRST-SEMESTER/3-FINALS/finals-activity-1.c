/*  Arce, Jhon Brian
    BSIT 1F

    Finals Activity 1 : FOR LOOP
*/

#include <stdio.h>
#include <stdlib.h>

    int i, n;

int main()
{

    printf("\n\n\n\t\t\tFor Loop");
    printf("\n\n\t\tEnter the Initial Value : "); scanf("%d", &i);
    printf("\n\t\tEnter the Ending Value : "); scanf("%d", &n);

    for(i; i <= n; i++)
    {
        printf("\t\t\t\t%d\n", i);
    }

    return 0;
}
