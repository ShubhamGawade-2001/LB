#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int index = 0;
    for(index = 0;index < iFrequency; index++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter no");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}