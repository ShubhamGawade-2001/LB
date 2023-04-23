#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo <=0)
    {
        iNo = -iNo;
    }
    else
    {
        for( iCnt = 1; iCnt<=iNo;iCnt++ )
        {
            if(iNo % iCnt == 0 && iCnt * 2)
            {
                printf("%d\t", iCnt );
            }
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number to get EVEN FACTORS");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}