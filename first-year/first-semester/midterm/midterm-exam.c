/*  Arce, Jhon Brian V.
    BSIT 1F
    
    Midterm Examination
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{

    float grade;

    int ass1 = get_int("Enter the score of your Assigntment : ");
    int ass2 = get_int("Enter the score of your Assigntment : ");
    int seatWork1 = get_int("Enter the score of your Seat Work : ");
    int seatWork2 = get_int("Enter the score of your Seat Work : ");
    int seatWork3 = get_int("Enter the score of your Seat Work : ");
    int quiz1 = get_int("Enter the score of your Quiz : ");
    int quiz2 = get_int("Enter the score of your Quiz : ");
    int quiz3 = get_int("Enter the score of your Quiz : ");
    int exam = get_int("Enter the score of your Exam : ");

    grade = ((ass1 + ass2) / 2 * .10) + ((seatWork1 + seatWork2 + seatWork3) / 3 * .20) + ((quiz1 + quiz2 + quiz3) / 3 * .30) + (exam * .40);

    printf("Your Grade is %g! \n", grade);

    return 0;
}
