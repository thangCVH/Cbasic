#include <stdio.h>
#include <math.h>
int main()
{
    int nb1,nb2,nb3;
    printf("input A:\n");
    scanf("%d",&nb1);
    if(nb1<=2)
    {
        printf("this is obviously a prime number");
    }
    else
    {
       for (nb2=2; ;nb2++)
       {
        if (nb2<nb1-1)
        {
            if (nb1%nb2==0)
            {
                printf("A is not prime number");
                break;
            }
        }
        if (nb2==nb1-1)
        {
            printf("A is prime number");
            break;
        }
       }

    }
    return 0;
}