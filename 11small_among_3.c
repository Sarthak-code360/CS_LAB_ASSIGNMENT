#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    printf("Enter the third number : \n");
    scanf("%d",&c);

    if(a>b && a>c)
    printf(" %d is greater than  %d and %d ",a,b,c);
    else if(b>a && b>c)
    printf(" %d is greater than  %d and %d ",b,a,c);
    else
    printf(" %d is greater than  %d and %d ",c,a,b);
    return 0;
}