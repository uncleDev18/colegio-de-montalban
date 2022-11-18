/*Arce, Jhon Brian V.
  BSIT 1F

  ACTIVITY # 2
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main()
{
    string name = get_string("What is your Name? ");
    int  age = get_int("How old are you? ");
    string birthday = get_string("When's your Birthday? ");
    string add = get_string("Where are you from? ");
    string contactNum = get_string("What is your Contact No.? ");
    string emailAdd = get_string("Where can I Email you? ");
    string citizen = get_string("What is your Citizenship? ");
    string fatherName = get_string("What is your Father's Name? ");
    string motherName = get_string("What is your Mother's Name? ");

    string educPri = get_string("Primary Education? ");
    string educSec = get_string("Secondary Education? ");
    string educTer = get_string("Tertiary Education? ");

    string firstChoice = get_string("What is your First Choice? ");
    string secondChoice = get_string("What is your Second Choice? ");
    string thirdChoice = get_string("What is your Third Choice? ");
    printf("\n");

    printf("=========================================  \n");
    printf("           REGISTRATION FORM               \n");
    printf("=========================================\n\n");

    printf("NAME           : %s\n", name);
    printf("AGE            : %i\n", age);
    printf("BIRTHDAY       : %s\n", birthday);
    printf("ADDRESS        : %s\n", add);
    printf("CONTACT NO.    : %s\n", contactNum);
    printf("EMAIL ADD.     : %s\n", emailAdd);
    printf("CITIZENSHIP    : %s\n", citizen);
    printf("FATHER'S NAME  : %s\n", fatherName);
    printf("MOTHER'S NAME  : %s\n\n", motherName);

    printf("========================================   \n");
    printf("          EDUCATIONAL ATTAINTMENT          \n");
    printf("=========================================\n\n");

    printf("PRIMARY        : %s\n", educPri);
    printf("SECONDARY      : %s\n", educSec);
    printf("TERTIARY       : %s\n\n", educTer);

    printf("1ST CHOICE     : %s\n", firstChoice);
    printf("2ND CHOICE     : %s\n", secondChoice);
    printf("3RD CHOICE     : %s\n", thirdChoice);
}
