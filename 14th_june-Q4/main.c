#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("enter a letter:");
    scanf("%c",&n);
    switch(n)
    {
        case'a':printf("\n vowel");break;
        case'e':printf("\n vowel");break;
        case'i':printf("\n vowel");break;
        case'o':printf("\n vowel");break;
        case'u':printf("\n vowel");break;
        default:("%c is not a vowel",n);
    }

    return 0;
}
