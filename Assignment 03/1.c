#include<stdio.h>

void PrintEvenNo(int iNo)
{
    if(iNo <= 0)
    {
        printf("invalid input");
    }
    else
    {
        for(int iCnt = 0; iCnt<iNo;iCnt++)
        {
            printf("%d\t",(iCnt * 2)+1);
            /*if(iCnt % 2 ==0)
            {
                //even number up to iNo
                printf(" even nu up to%d\n",iCnt);
            }*/
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter no of Even numbers you want\n");
    scanf("%d",&iValue);

    PrintEvenNo(iValue);
    return 0;

}