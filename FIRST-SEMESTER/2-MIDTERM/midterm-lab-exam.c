/*  Arce, Jhon Brian V.
    BSIT 1F

    Midterm Examination
*/

#include <stdio.h>
#include <math.h>

    float grade, ass1, ass2, SW1, SW2, SW3, quiz1, quiz2, quiz3, ME;

int main()
{
    printf("\n\n\n\t\t\tGrade Computation");
    printf("\n\n\t\tEnter the score of your Assigntment : "); scanf("%f", &ass1);
    printf("\n\t\tEnter the score of your Assigntment : "); scanf("%f", &ass2);
    printf("\n\t\tEnter the score of your Seat Work : "); scanf("%f", &SW1);
    printf("\n\t\tEnter the score of your Seat Work : "); scanf("%f", &SW2);
    printf("\n\t\tEnter the score of your Seat Work : "); scanf("%f", &SW3);
    printf("\n\t\tEnter the score of your Quiz : "); scanf("%f", &quiz1);
    printf("\n\t\tEnter the score of your Quiz : "); scanf("%f", &quiz2);
    printf("\n\t\tEnter the score of your Quiz : "); scanf("%f", &quiz3);
    printf("\n\t\tEnter the score of your Exam : "); scanf("%f", &ME);

    grade = ((ass1 + ass2) / 2 * .10) + ((SW1 + SW2 + SW3) / 3 * .20) + ((quiz1 + quiz2 + quiz3) / 3 * .30) + (ME * .40);
    
    system("cls");
    
    printf("\n\n\n\t\t\tYour Grade is %g! \n", grade);

    return 0;
}
