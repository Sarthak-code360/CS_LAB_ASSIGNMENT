#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Input any number: \n");
    scanf("%d",&num);
    printf("1 + ");
    for(i=2;i<=num-1;i++)
    printf(" 1/%d +",i);
    for(i=1;i<=num;i++)
    sum = sum + i;
    printf(" 1/%d",num);
    printf("Sum = 1/%d\n",sum+1/num);

    return 0;
}
