char name[50], birthday[50], add[50], contactNum[50], emailAdd[50], citizen[50], fatherName[50], motherName;
    char educPri[50], educSec[50], educTer[50], firstChoice[50], secondChoice[50], thirdChoice[50];
    int age;

    printf("What is your Name? ");
    scanf(" %50[^\n]", &name);

    printf("How old Are you? ");
    scanf("%i", &age);

    printf("What is your Birthday? ");
    scanf(" %50[^\n]", &birthday);

    printf("Where are you from? ");
    scanf(" %50[^\n]", &add);

    printf("What is your Contact Number? ");
    scanf("%s", &contactNum);

    printf("What is your Email Address? ");
    scanf("%s", &emailAdd);

    printf("What is your Citizenship? ");
    scanf("%s", &citizen);

    printf("Name of your Father? ");
    scanf(" %50[^\n]", &fatherName);

    printf("Name of your Mother? ");
    scanf(" %50[^\n]", &motherName);

    printf("Primary Education: ");
    scanf(" %50[^\n]", &educPri);

    printf("Secondary Education: ");
    scanf(" %50[^\n]", &educSec);

    printf("Teriary Education: ");
    scanf(" %50[^\n]", &educTer);

    printf("What is your First Choice? ");
    scanf(" %50[^\n]", &firstChoice);

    printf("What is your Second Choice? ");
    scanf(" %50[^\n]", &secondChoice);

    printf("What is your Third Choice? ");
    scanf(" %50[^\n]", &thirdChoice);

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
    printf("MOTHER'S NAME  : %s\n", motherName);

    printf("========================================   \n");
    printf("          EDUCATIONAL ATTAINTMENT          \n");
    printf("=========================================\n\n");

    printf("PRIMARY        : %s\n", educPri);
    printf("SECONDARY      : %s\n", educSec);
    printf("TERTIARY       : %s\n\n", educTer);

    printf("1ST CHOICE     : %s\n", firstChoice);
    printf("2ND CHOICE     : %s\n", secondChoice);
    printf("3RD CHOICE     : %s\n", thirdChoice);
