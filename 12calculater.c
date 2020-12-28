#include<stdio.h>
int main(int argc, char const *argv[])
{
    char operator;
    float a,b,result;
    printf("enter the operator : \n(+) addition\n(-) subtraction\n(*) product\n(/) divide\n");
    scanf("%c",&operator);
    printf("enter a:\n");
    scanf("%f",&a);
    printf("enter b:\n");
    scanf("%f",&b);
    switch (operator)
    {
    case '+':
        result=a+b;
        printf("addition %f + %f = %f \n",a,b,result);
        break;
    case '-':
        result=a-b;
        printf("subtraction %f - %f = %f \n",a,b,result);
        break;
    case '*':
        result=a*b;
        printf("product %f * %f = %f\n",a,b,result);
        break;
    case '/':
        result=a/b;
        printf("divide %f / %f = %f\n",a,b,result);
        break;
    
    default:
        printf("ERROR!!  given operator is invalid");
        break;
    }
    return 0;
}
