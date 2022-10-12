#include <stdio.h>
#include <math.h>

int multiplication(int n){
    if(n<1) return 0;
    else if(n == 1) return 1;
    else if(n == 2) return 2;
    else return n*mul(n-2);
    
}

int main()
{
    int n,m;
    printf("input n\n");
    scanf("%d",&n);
        printf("multiplication=%d",multiplication(n));
    return 0;
}
