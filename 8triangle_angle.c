#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{

    float x,y,z;

    printf("Enter the lengths of 3 sides of a triangle:\n");
    scanf("%f %f %f", &x, &y, &z);
    if((x<=0) || (y<=0) || (z<=0)) 
    {
        printf("This is not a triangle!!!!!!!\n");
        //MEASUREMENT OF SIDES NEVER BE -VE
    } 
    else 
    {
        if((x + y <= z) || (x + z <= y) || (y + z <= x)) 
        {
            printf("This is not a triangle!!!!!!\n");
            //SUM OF 2 SIDES NOT BE LESS OR EQUAL TO 3rd ONE 
        } 
        else 
        {
            //BY PYTHAGORAUS THEORAM (x^2 + y^2 = z^2)
            if( ((x * x) + (y * y) == (z * z)) || ((x * x) + (z * z) == (y * y)) || ((z * z) + (y * y) == (x * x)) ) 
            {
                printf("This is a right-angled triangle.\n");
                //FOR RIGHT ANGLE TRIANGLE  SUM OF SQUARE OF 2 SIDE MUST BE EQUAL TO 3rd ONE 
            } 
            else if( ( ((x * x) + (y * y) < (z * z)) || ((x * x) + (z * z) < (y * y)) || ((z * z) + (y * y) < (x * x)) ) || ( ( x<=z && y<=z ) || ( x<=y && z<=y ) || ( y<=x && z<=x ) ) ) 
            {
                printf("This is an acute-angled triangle.\n");
                //FOR ACUTE ANGLE TRIANGLE SUM OF SQUARE OF 2 SIDES MUST BE LESS(<) THEN 3rd ONE
            } 
            else if( ( ((x * x) + (y * y) > (z * z)) || ((x * x) + (z * z) > (y * y)) || ((z * z) + (y * y) > (x * x)) ) || ( ( x>z && y>z ) || ( x>y && z>y ) || ( y>x && z>x ) ) ) 
            {
                printf("This is an obtuse-angled triangle.\n");
                //FOR OBTUSE ANGLE TRIANGLE SUM OF SQUARE OF 2 SIDES MUST BE GREATER(>) THAN 3rd ONE
            } 
            else
            {
                printf("Not a triangle\n");
            }

        }
    }

    return 0;
}