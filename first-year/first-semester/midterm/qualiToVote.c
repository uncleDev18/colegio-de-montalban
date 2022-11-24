/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Qualified to vote
*/

#include <stdio.h>
#include <cs50.h>

int main()
{
    int age = get_int("Enter the Age : ");

    if(age >= 18)
    {
        printf("Qualified To Vote!\n");
    }
    else
    {
        printf("Too Young!\n");
    }
    return 0;
}
