#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char Cvalue)
{
    if(Cvalue =='a' || Cvalue =='e'|| Cvalue =='i' || Cvalue =='o'|| Cvalue =='u' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character ");
    scanf("%c",&cValue);
    bRet=Display(cValue);
    if(bRet == TRUE)
    {
        printf("VOWEL");
    }
    else
    {
        printf("NO VOWEL");
    }

    return 0;
}