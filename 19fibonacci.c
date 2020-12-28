#include <stdio.h>
int main() 
{
    int i, n, TERM1 = 0, TERM2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
    {
        printf("%d, ", TERM1);
        nextTerm = TERM1 + TERM2;
        TERM1 = TERM2;
        TERM2 = nextTerm;
    }

    return 0;
}