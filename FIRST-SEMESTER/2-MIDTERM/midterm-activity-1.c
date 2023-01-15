/* Jhon Brian Arce
    BSIT 1F

    ACTIVITY # 1 MIDTERM GRADE COMPUTATION
*/

#include <stdio.h>
#include <math.h>

    float grade, quiz, ass, proj, CS, ME;

int main(void)
{
    printf("\n\n\n\t\t\tGrade Computation");
    printf("\n\n\t\tEnter the Grade of the Quiz : "); scanf("%f", &quiz);
    printf("\t\tEnter the Grade of the Assignment : "); scanf("%f", &ass);
    printf("\t\tEnter the Grade of the Project : "); scanf("%f", &proj);
    printf("\t\tEnter the Grade of the Class Standing : "); scanf("%f", &CS);
    printf("\t\tEnter the Grade of the Major Exam : "); scanf("%f", &ME);

    grade = (CS * .10) + (quiz * .15) + (ass * .15) + (proj * .20) + (ME * .40);

    printf("\n\t\tYour Grade is %g\n\n", grade);

    return 0;
}
