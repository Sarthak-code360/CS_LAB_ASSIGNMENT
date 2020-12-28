#include <stdio.h>
int main()
{
     int a[3][4],i,j,g,l;
     printf("The numbers will be stored in this order  :\n");
     printf("1  2   3   4\n");
     printf("5  6   7   8\n");
     printf("9  10  11  12\n");
     printf("Enter the Numbers :\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<4;j++)
         scanf("%d",&a[i][j]);
     }
        g=a[0][0];
        for(i=0;i<3;i++)
     {
         for(j=0;j<4;j++)
         if(a[i][j]>g)
                g=a[i][j];
     }

     printf("Greatest Number  = %d\n",g);
        l=a[0][0];
        for(i=0;i<3;i++)
     {
         for(j=0;j<4;j++)
         if(a[i][j]<l)
            l=a[i][j];
     }

     printf("Smallest Number  = %d",l);
}