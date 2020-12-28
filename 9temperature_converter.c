#include <stdio.h>
int main()
{
    float f,c;
    int i;
    printf("What dou you want to find\nPress\n(1)Celsius\n(2)Fahrenheit\n");
    scanf("%d",&i);
    
    // Essential formula  T(°F) = T(°C) × 1.8 + 32

    if(i ==1)
    {
        printf("Enter temperature in Fahrenheit: \n");
        scanf("%f",&f);
        c = (f - 32) / 1.8;
        printf("Temperature in Celsius: %f",c);
    }
    else if(i==2)
    {
        printf("Enter temperature in Celsius: \n");
        scanf("%f",&c);
        f = (c * 1.8) + 32;
        printf("Temperature in Fahrenheit: %f",f);
    }
    else
    {
        printf("Put the type of temperatur correctly either 2 for Celsius or 1 for Fahrenheit \n");
    }
}