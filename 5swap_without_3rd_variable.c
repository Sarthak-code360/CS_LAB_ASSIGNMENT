#include  <stdio.h>
 
int main(int argc, char const *argv[])
{
   int a, b;

    printf("Enter the value of a : \n"); 
    scanf("%d",&a); 
    printf("Enter the value of b : \n");
    scanf("%d",&b);

    a = a + b; 
    b = a - b; 
    a = a - b; 
 
    printf("After swapping \na = %d\nb = %d",a ,b); 
 
    return 0; 
}