#include <stdio.h>
#include <math.h>
int main()
{
    float nb1,nb2,nb3;
    printf("input A,B:\n");
    scanf("%f",&nb1);
    scanf("%f",&nb2);
    if (nb1==0)
    {
        if (nb2==0)
        {
            printf("equation always true for any number");
        }
        else
        {
            printf("equation has no root");
        }
    }
    else
    {
        nb3=(0-nb2)/nb1;
        printf("solution C=%f",nb3);
    }
    return 0;
}