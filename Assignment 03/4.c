#include<stdio.h>

void Display(char Cvalue)
{
    if(Cvalue <='z' && Cvalue >='a')
    {
        printf("%c\n",Cvalue - 32);
    }
    else
    {
        printf("%c\n",Cvalue + 32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character ");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}