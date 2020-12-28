#include <stdio.h>
int main() 
   {
	double weight1, item1, weight2, item2, result;
    printf("Weight - Item1: ");
	scanf("%lf", &weight1);
	printf("No. of item1: ");
	scanf("%lf", &item1);
	printf("Weight - Item2: ");
	scanf("%lf", &weight2);
	printf("No. of item2: ");
	scanf("%lf", &item2);
	result = ((weight1 * item1) + (weight2 * item2)) / (item1 + item2);
	printf("Average Value = %f\n", result);
	return 0;
}