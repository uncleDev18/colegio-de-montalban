/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Grade Range
*/

#include <stdio.h>
#include <cs50.h>

int main()
{
    float grade = get_float("Enter your Grade : ");

    if(grade >- 90 && grade <= 100)
    {
        printf("Grade: A\n");
    }
    else if(grade >= 80 && grade < 90)
    {
        printf("Grade: B\n");
    }
    else if(grade >= 70 && grade < 80)
    {
        printf("Grade: C\n");
    }
    else if(grade >= 60 && grade < 70)
    {
        printf("Grade: D\n");
    }
    else if(grade >= 0 && grade < 60)
    {
        printf("Grade: E\n");
    }
    else
    {
        printf("OUT OF RANGE!\n");
    }
    return 0;
}
