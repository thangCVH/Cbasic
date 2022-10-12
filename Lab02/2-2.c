#include <stdio.h>
#include <math.h>

int sum(int a, int b){
    return a+b;
}

int main()
{
    int slect,i;
    float a,b;
    float solut;
    
    for ( i = 0; ; i++)
    {
        printf("input a,b:\n");
    scanf("%f\n%f",&a,&b);
    printf("select the math count\n");
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n0.exit\n");
    scanf("%d",&slect);
     if (slect==1)
     {
        solut=sum(a,b);
        printf("a + b = %f",solut);
        break;
     }  
     else if (slect==2)
     {
        solut=a-b;
        printf("a - b = %f",solut);
        break;
     }
    else if (slect==3)
    {
        solut=a*b;
        printf("a x b = %f",solut);
        break;
    }
    else if (slect==4)
    {   
        solut=a/b;
        printf("a : b = %f",solut);
        break;
    }

    else if (slect==0)
    {
        printf("exited");
        break;
    }
    else
    {
        while (slect!=0&&slect!=1&&slect!=2&&slect!=3&&slect!=4)
        {
            printf("input error, please input again\n");
            scanf("%d",&slect);
        } 
    }
    }
    return 0;
}
