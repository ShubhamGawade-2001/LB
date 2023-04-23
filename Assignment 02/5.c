#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if (bRet == TRUE)
    {
        printf("EVEN");
    }
    else 
    {
        printf("ODD");
    }
    return 0;
}