/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Grade Range
*/

#include <stdio.h>
#include <stdlib.h>

    float grade;

int main()
{
    printf("\n\n\n\t\t\tGrade Range");
    printf("\n\n\t\tEnter your Grade : "); scanf("%f", &grade);

    if(grade >= 90 && grade <= 100)
    {
        printf("\n\n\t\tGrade: A");
    }
    else if(grade >= 80 && grade < 90)
    {
        printf("\n\n\t\tGrade: B");
    }
    else if(grade >= 70 && grade < 80)
    {
        printf("\n\n\t\tGrade: C");
    }
    else if(grade >= 60 && grade < 70)
    {
        printf("\n\n\t\tGrade: D");
    }
    else if(grade >= 0 && grade < 60)
    {
        printf("\n\n\t\tGrade: E");
    }
    else
    {
        printf("\n\n\t\tOUT OF RANGE!");
    }

    return 0;
}
