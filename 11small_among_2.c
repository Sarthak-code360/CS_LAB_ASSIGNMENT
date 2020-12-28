#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter value of a: \n");
    scanf("%d",&a);
    printf("Enter value of b: \n");
    scanf("%d",&b);

    if (a<b)
    {
        printf("   So  %d < %d",a,b);
    }
    else if(a==b)
    {
        printf("  So  %d = %d",a,b);
    }
    else
    {
        printf("   So  %d < %d",b,a);
    }
    return 0;
}
