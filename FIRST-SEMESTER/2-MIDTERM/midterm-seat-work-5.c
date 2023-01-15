/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Qualified to vote
*/

#include <stdio.h>
#include <stdlib.h>

    int age;

int main()
{
    printf("\n\n\n\t\t\tQualification to vote");
    printf("\n\n\t\tEnter the Age : "); scanf("%d", &age);

    if(age >= 18)
    {
        printf("\n\n\t\tQualified To Vote!");
    }
    else
    {
        printf("\n\n\t\tToo Young!");
    }
    
    return 0;
}