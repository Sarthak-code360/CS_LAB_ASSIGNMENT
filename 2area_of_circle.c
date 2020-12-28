#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    float area , r;
    printf("Enter value of r: \n");
    scanf("%f",&r);
    area = PI * r * r;
    printf("area of circle is : %f\n",area);
    return 0;
}
