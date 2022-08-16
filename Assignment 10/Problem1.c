//Accept N number from user and  accept  one another number as  No, Check whether No is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchNo(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;   
   bool bRet=false;
   

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    bRet = SearchNo(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is not Present\n");
    }
     free(ptr);

    return 0;
}