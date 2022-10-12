#include <stdio.h>
#include <math.h>

int main()
{
    int nb1=1,nb2=1,nb3,n;
    int m;
    printf("input n\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("fibonacci sequence:1");
    }
    else if (n==2)
    {
        printf("fibonacci sequence:1;1");
    }
    else
    {
        printf("fibonacci sequence:\n1\n1\n");
        for (m=2;m<n; m++)
        {
            nb3=nb1+nb2;
            printf("%d\n",nb3);
            nb1=nb2;
            nb2=nb3;
        }
    }
    return 0;
    
}