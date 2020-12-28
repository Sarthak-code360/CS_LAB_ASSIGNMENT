#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r , c ;
    for ( r = 0; r < 3; r++)
    {
        for( c = 0 ; c <= r ; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
