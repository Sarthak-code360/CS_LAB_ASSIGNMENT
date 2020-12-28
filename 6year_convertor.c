#include <stdio.h> 
int main()
{
    int days, years, weeks;

    days = 1329; 
    printf("In 1329 days there are :\n");
    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("  %d -> Years \n", years);
    printf("  %d -> Weeks\n", weeks);
    printf("  %d -> Days\n", days);

    return 0;
}