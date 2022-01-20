#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character here: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A':
        printf("It's a vowel character");
        break;
    case 'a':
        printf("It's a vowel character");
        break;
    case 'E':
        printf("It's a vowel character");
        break;
    case 'e':
        printf("It's a vowel character");
        break;
    case 'I':
        printf("It's a vowel character");
        break;
    case 'i':
        printf("It's a vowel character");
        break;
    case 'O':
        printf("It's a vowel character");
        break;
    case 'o':
        printf("It's a vowel character");
        break;
    case 'U':
        printf("It's a vowel character");
        break;
    case 'u':
        printf("It's a vowel character");
        break;


    default:
        printf("It's a consonant character");
    }
}
