
#include <stdio.h>
int main(int argc, char const *argv[])
{
int a, b, z;    
printf("Enter the value of a : \n");
scanf("%d", &a);
printf("Enter the value of b :  \n");
scanf("%d",&b);
//HERE z IS 3RD VARIABLE WITH HELP OF WHICH VALUE OF a AND b GOT SWAPED
z = a;
a = b;
b = z;
printf("\n After swapping \na = %d\nb = %d\n", a, b);
return 0;
}
