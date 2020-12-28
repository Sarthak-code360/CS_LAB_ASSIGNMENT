#include <stdio.h>
int main()
{
    int n , a = 0 ,sum = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(n>0;a<n;a++)             // S = 2+4+6+8+……………N terms.

    {
        if(a%2==0)
        {
            sum = sum + a ;
        }
    }
    printf("The sum is %d ",sum);
    return 0;
}