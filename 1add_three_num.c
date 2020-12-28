#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z,sum;
    printf("Enter the value of  \nx:\ny:\nz:\n");
    scanf("%d%d%d",&x,&y,&z);
    sum = x + y + z;
    printf("%d + %d + %d = %d\n",x,y,z,sum);
    return 0;
}
