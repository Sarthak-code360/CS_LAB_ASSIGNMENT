#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,D;
    float x1,x2,rootD;
    printf("The general equation of a qudratic equation is ----> \n");
    printf(" a*x*x + b*x +c =0 \n");
    printf("Input a : ");
    scanf("%d",&a);
    printf("Input b : ");
    scanf("%d",&b);
    printf("Input c : ");
    scanf("%d",&c);

    D = b*b - 4*a*c ;
    rootD = sqrt(D);
    
    if(D<0)
    printf("The roots are imagnary ");
    else if(D>=0)
    {
        x1 = ((-b)+ rootD)/(2*a);
        x2 = ((-b)- rootD)/(2*a);
        
        printf(" %f  ,   %f    are the roots of the equation you gave.",x1,x2);
    }
    return 0;
}