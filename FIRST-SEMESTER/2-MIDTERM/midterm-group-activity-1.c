/*  Midterm Group Activity 1 : Pass or Fail Identifier 

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

    // Initialization or Assigning Value
    float grade, quiz, assign, proj, CS, ME;

int main()
{
    // Getting Value to the User
    printf("\n\n\n\t\t\tGrade Computation");
    printf("\n\n\t\tEnter the Grade of the Quiz : "); scanf("%f", &quiz);
    printf("\t\tEnter the Grade of the Assignment : "); scanf("%f", &assign);
    printf("\t\tEnter the Grade of the Project : "); scanf("%f", &proj);
    printf("\t\tEnter the Grade of the Class Standing : "); scanf("%f", &CS);
    printf("\t\tEnter the Grade of the Major Exam : "); scanf("%f", &ME);

    // The Process or Computation
    grade = (CS * .10) + (quiz * .15) + (assign * .15) + (proj * .20) + (ME * .40);

    // To print a Value of Grade
    printf("\n\n\t\tYour Grade is %g", grade);

    // The Condition
    if(grade >= 75)
    {
        printf("\n\n\t\tYou Passed!");
    }

    if(grade < 75)
    {
        printf("\n\n\t\tYou Failed!");
    }

    // Code After If
    printf("\n\n\t\tThank You for using Our Program!");

    return 0;
}
