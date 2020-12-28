#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input sides of a triangle */
    printf("Enter measurement of side 1 :  \n");
    scanf("%d", &side1);
    printf("Enter measurement of side 2 :  \n");
    scanf("%d",&side2);
    printf("Enter measurement of side 3 :  \n");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3) 
    {
        // for equilateral triangle all sides are equal 
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        // for isosceles trinangle any two sides are equal 
        printf("Isosceles triangle.");
    }
    else 
    {
        // for scaler triangle none sides are equal 
        printf("Scalene triangle.");
    }

    return 0;
}