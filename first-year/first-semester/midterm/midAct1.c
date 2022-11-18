/* Jhon Brian Arce
    BSIT 1F

    ACTIVITY # 1 MIDTERM
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float grade;

    float quiz = get_float("Enter the Grade of the Quiz : ");
    float assign = get_float("Enter the Grade of the Assignment : ");
    float proj = get_float("Enter the Grade of the Project : ");
    float CS = get_float("Enter the Grade of the Class Standing : ");
    float ME = get_float("Enter the Grade of the Major Exam : ");

    grade = (CS * .10) + (quiz * .15) + (assign * .15) + (proj * .20) + (ME * .40);

    printf("Your Grade is %g\n\n", grade);

}
