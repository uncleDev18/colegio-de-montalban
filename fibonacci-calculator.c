/*  Arce, Jhon Brian 
    BSIT 1F
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    double ans;
    int n;

    printf("          FIBONACCI CALCULATOR          \n\n");
    
    printf("Enter the Value of N : ");
    scanf("%i", &n);

    ans = round((pow(1.618034, n) - pow((1 - 1.618034), n)) / sqrt(5));

    printf("Therefore, the %i term is %.0f. \n", n, ans);

    return 0;

}
