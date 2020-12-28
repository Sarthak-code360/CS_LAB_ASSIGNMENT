#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the character : \n");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Alphabet is vowel");
    }
    else
    {
        printf("Alphabet is consonant");
    }
    
    return 0;
}
