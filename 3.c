//check whether an alphabet entered by the user is a vowel or a consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the cahracter\n");
    scanf(" %c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("vowel\n");
    else
    printf("consonant\n");
    return 0;
}