#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>



int main()
{
    double ans;

    printf("          FIBONACCI CALCULATOR          \n\n");

    int n = get_int("Enter the Value of N : ");

    ans = round((pow(1.618034, n) - pow((1 - 1.618034), n)) / sqrt(5));

    printf("Therefore, the %i term is %.0f. \n", n, ans);

    return 0;

}
