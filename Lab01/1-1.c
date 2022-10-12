#include <stdio.h>
#include <math.h>
int main()
{
    float nb1,nb2,nb3;
    printf("input A,B:\n");
    scanf("%f",&nb1);
    scanf("%f",&nb2);
    if (nb2==0)
    {
        printf("error: cant divide by zero");
    }
    else
    {
        nb3=nb1/nb2;
        printf("solution C = %f",nb3);
    }
    return 0;
}