#include <stdio.h>
int main()
{
    float BasicSalary , DA , HRA , GrossSalary;
    printf("Input Basic Salary : \n");
    scanf("%f",&BasicSalary);
    DA = 0.4 * BasicSalary ;  //dearness allownce
    // Given DA = 40% in question  
    printf("Total DA : %f\n",DA);
    HRA = 0.2 * BasicSalary ; //house rent allounce
    // Given HRA = 20% in question
    printf("Total HRA : %f\n",HRA);

    GrossSalary = BasicSalary + DA + HRA ;
    printf("The Gross Salary is %f : \n",GrossSalary);
    return 0;
}