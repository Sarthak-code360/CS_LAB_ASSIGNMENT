#include<stdio.h>
int main(int argc, char const *argv[])
{
    int customerid;
    float unit , costperunit ,amountpay ,surchg=0 , netamountpay ;
    char customername[20];
    printf("Enter 10 digit customer id :  \n");
    scanf("%d",&customerid);
    printf("Enter Customer name  :  \n");
    scanf("%s",&customername);
    printf("Enter total amount of units consumed :  \n");
    scanf("%f",&unit);
    if (unit < 200)
    {
        costperunit = 1.20;
    }
    else if (unit >=200 && unit <=500)
    {
        costperunit = 1.80;
    }
    else 
    {
        costperunit = 2.00;
    }
    amountpay = unit * costperunit ;

    if ( unit > 400)
    {
        surchg = amountpay * 15 / 100 ;   
    }
    netamountpay = amountpay + surchg ;
    if (amountpay < 100)
    {
        netamountpay =100;
    }

    printf("           >>>>>ELECTRICITY BILL<<<<<\n");
    printf("Customer id                        : %d\n",customerid);
    printf("Customer name                      : %s\n",customername);
    printf("Total unit of electricity consumed : %5.3f\n",unit);
    printf("Payable amount  Rs. %2.2f per unit : %8.2f\n",costperunit,amountpay);
    printf("Surcharge amount                   : %8.2f\n",surchg);
    printf("Net payable amount                 : %8.2f\n",netamountpay);

    return 0;
}
