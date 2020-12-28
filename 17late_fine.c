
#include<stdio.h>
#include<conio.h>
int main()
{
    int days;
    float fine;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days > 0 && days <= 5)        // For first 5 days the fine is 50 paisa
        fine = 0.50 * days;

    if (days >= 6 && days <= 10)      //For 6-10 days fine is one rupees
        fine = 1 * days;

    if (days > 10)                    // above 10 days fine is 5 rupees
        fine = 5 * days;

    if (days > 30)                    //after 30 days your membership will be cancelled
    {
        printf("Your membership would be canceled.\n");
    }
    
    printf("You have to pay Rs. %.2f fine.", fine);

    return 0;
}
