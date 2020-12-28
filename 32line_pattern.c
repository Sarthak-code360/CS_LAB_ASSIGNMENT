#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r , c , n;
    
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

