/*Arce, Jhon Brian V.
  BSIT 1F

  ACTIVITY # 2 : REGISTRATION FORM
*/

#include <stdio.h>
#include <stdlib.h>

    char name[50], birthday[50], add[50], contact[50], email[50], citizen[50], fatherName[50], motherName[50];
    char priEduc[50], secEduc[50], terEduc[50], firstChoice[50], secondChoice[50], thirdChoice[50];
    int age;

int main()
{
    printf("\n\n\n\t\t\t   Register Form\n");
    printf("\t\t\tPersonal Information\n\n");
    printf("\t\tWhat is your Name? : "); scanf(" %[^\n]s", name);
    printf("\t\tHow old are you? : "); scanf("%d", &age);
    printf("\t\tWhen's your Birthday? : "); scanf(" %[^\n]s", birthday);
    printf("\t\tWhere are you from? : "); scanf(" %[^\n]s", add);
    printf("\t\tWhat is your Contact No.? : "); scanf(" %[^\n]s", contact);
    printf("\t\tWhere can I Email you? : "); scanf(" %[^\n]s", email);
    printf("\t\tWhat is your Citizenship? : "); scanf(" %[^\n]s", citizen);
    printf("\t\tWhat is your Father's Name? : "); scanf(" %[^\n]s", fatherName);
    printf("\t\tWhat is your Mother's Name? : "); scanf(" %[^\n]s", motherName);
    printf("\n\n\t\t\tEducation Background\n\n");
    printf("\t\tPrimary Education? : "); scanf(" %[^\n]s", priEduc);
    printf("\t\tSecondary Education? : "); scanf(" %[^\n]s", secEduc);
    printf("\t\tTertiary Education? : "); scanf(" %[^\n]s", terEduc);
    printf("\n\t\tFirst Choice? : "); scanf(" %[^\n]s", firstChoice);
    printf("\t\tSecond Choice? : "); scanf(" %[^\n]s", secondChoice);
    printf("\t\tThird Choice? : "); scanf(" %[^\n]s", thirdChoice);

    system("cls");

    printf("\n\n\n\t\t========================================\n");
    printf("\t\t             Registration Form          \n");
    printf("\t\t========================================\n\n");
    printf("\t\tName ........ : %s\n", name);
    printf("\t\tAge ......... : %d\n", age);
    printf("\t\tBirthday .... : %s\n", birthday);
    printf("\t\tAddress ..... : %s\n", add);
    printf("\t\tContact No. . : %s\n", contact);
    printf("\t\tCitizenship . : %s\n", citizen);
    printf("\t\tFather's Name : %s\n", fatherName);
    printf("\t\tMother's Name : %s\n", motherName);
    printf("\n\t\t========================================\n");
    printf("\t\t             Education Background         \n");
    printf("\t\t========================================\n\n");
    printf("\t\tPrimary ..... : %s\n", priEduc);
    printf("\t\tSecondary ... : %s\n", secEduc);
    printf("\t\tTeriary ..... : %s\n", terEduc);
    printf("\t\t1st Choice .. : %s\n", firstChoice);
    printf("\t\t2nd Choice .. : %s\n", secondChoice);
    printf("\t\t3rd Choice .. : %s\n", thirdChoice);
    printf("\t\t========================================\n\n");

    return 0;
}