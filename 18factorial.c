#include <stdio.h>
 
 int main(int argc, char const *argv[])
{
    //eg. :- (5 factorial = 5! = 1*2*3*4*5)
    int i , num , fact = 1; //defining factorial as 1 since least value is 1
    printf ("Enter a number to calculate its factorial :  \n");
    scanf ("%d", &num);
    if (num<0) //if the input is a negative integer then no factorial exist
    {
        printf ("ERROR!!!! Factorial is not defined for negative numbers.");
    }
    else
    {
        for( i=1;i<= num;i++) 
        {
            fact = fact * i;  // keeps on multiplying and storing in the value of factorial till the input integer is reached
        }
        printf("Factorial of %d = %d\n", num, fact);
    }
    return 0; 
}