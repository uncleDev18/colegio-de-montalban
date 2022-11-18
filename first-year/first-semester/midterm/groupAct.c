/*  Group Activity

    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxwell
        Santelices, Albert
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Initialization or Assigning Value
    float grade, quiz, assign, proj, CS, ME;

    // Getting Value to the User
    printf("Enter the Grade of the Quiz : ");
    scanf("%f", &quiz);

    printf("Enter the Grade of the Assignment : ");
    scanf("%f", &assign);

    printf("Enter the Grade of the Project : ");
    scanf("%f", &proj);

    printf("Enter the Grade of the Class Standing : ");
    scanf("%f", &CS);

    printf("Enter the Grade of the Major Exam : ");
    scanf("%f", &ME);

    // The Process or Computation
    grade = (CS * .10) + (quiz * .15) + (assign * .15) + (proj * .20) + (ME * .40);

    // To Clear
    system("cls");

    // To print a Value of Grade
    printf("\nYour Grade is %g \n\n", grade);

    // The Condition
    if(grade >= 75)
    {
        printf("You Passed!\n");
    }

    if(grade < 75)
    {
        printf("You Failed!\n");
    }

    // Code After If
    printf("Thank You for using Our Program!\n\n");

    return 0;
}
