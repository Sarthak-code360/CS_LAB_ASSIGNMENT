#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r , c ;
    for( r = 3 ; r >= 1; r--)
    {
        for ( c = 3; c >= 1; c--)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}
