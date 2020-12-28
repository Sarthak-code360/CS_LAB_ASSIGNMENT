#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any character: \n");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}