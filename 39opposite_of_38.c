#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r , c ;
    for( r = 1 ; r <= 3 ; r++ )
    {
        for ( c = 1 ; c <= r ; c++ )
        {
            printf("%d",r);
        }
        printf("\n");
        
    }
    return 0;
}
