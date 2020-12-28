#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    printf("Input coordinate X : ");
    scanf("%f",&a);
    printf("Input coordinate Y : ");
    scanf("%f",&b);

    if(a==0 && b==0)
    printf("This is the Origin");
    else if(a>0 && b>0)
    printf("The coordinates (X = %f , Y = %f) lie in the 1st quadrant",a,b);
    else if(a<0 && b>0)
    printf("The coordinates (X = %f , Y = %f) lie in the 2nd quadrant",a,b);
    else if(a<0 && b<0)
    printf("The coordinates (X = %f , Y = %f) lie in the 3rd quadrant",a,b);
    else if(a>0 && b<0)
    printf("The coordinates (X = %f , Y = %f) lie in the 4th quadrant",a,b);
    else if( (a<=0 && b<0) || (a<=0 && b>0) )
    printf("The coordinates (X = %f , Y = %f) lie on the Y axis",a,b);
    else if( (a<0 && b>=0) || (a>0 && b<=0))
    printf("The coordinates (X = %f , Y = %f) lie on the X axis",a,b);
    
    return 0;
}