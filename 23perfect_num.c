//For example, 6 is a perfect number in C because 6 is divisible by 1, 2, 3, and 6.
// So, the sum of these values is 1+2+3 = 6

# include <stdio.h>   

int main()   
{   
 int i, Number, Sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &Number) ;   
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("\n %d is a Perfect Number", Number) ;   
 else   
    printf("\n%d is not the Perfect Number", Number) ;   

return 0 ;   
}