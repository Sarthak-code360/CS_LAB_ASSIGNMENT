#include <stdio.h>

int main()
{
    int i,N,fact=1;
	float sum;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	sum=0;
	for(i=1;i<=N;i++)
    {
        fact=fact*i;
    }
	for(i=1;i<=N;i++)
		sum = sum + fact*i;
	
	printf("Sum of the series is: %f\n",sum);

    return 0;
}