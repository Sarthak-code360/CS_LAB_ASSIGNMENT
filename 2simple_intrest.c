#include<stdio.h>
int main(int argc, char const *argv[])
{
    int SI,P,R,t;
    //SI= simple intrest , P = principal , R = rate , t = time 
    printf("enter value of \nP\nR\nt\n");
    scanf("%d%d%d",&P,&R,&t);
    SI = P * R * t / 100;
    printf("simple intrest of given values is: %d\n",SI);
    return 0;
}
