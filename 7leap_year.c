#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the year :  \n");
    scanf("%d",&n);

    if(n%4==0)
    {
        printf("Given year is leap year having 366 days");
    
    }
    else
    {
        printf("Given year is not leap year it only have 365 days");
    }
    
    return 0;
}
