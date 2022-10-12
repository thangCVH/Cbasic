#include <stdio.h>
#include <math.h>

int main()
{
    int n,mul=1,m;
    printf("input n\n");
    scanf("%d",&n);
    if (n%2==0)
    {
        for (m=2;m<=n;m+=2)
        {
            mul=mul*m;
        }
        printf("multiplication=%d",mul);
    }
    if (n%2==1)
    {
        for (m=1;m<=n;m+=2)
        {
            mul=mul*m;
        }
        printf("multiplication=%d",mul);
        
    }
    return 0;
}