#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter value of n : \n");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("The given number is even\n");
    }
    else
    {
        printf("The given number is odd\n");
    }
    
    return 0;
}
