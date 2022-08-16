//Accept N number from user and  accept Range, and Display Elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
  
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {
            if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
            {
                printf("%d\t",Arr[iCnt]);
            }
    }
	
}

int main()
{
    int iSize = 0, iCnt = 0, iNo1 = 0,iNo2=0;
    int *ptr = NULL;   
    int iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Starting point \n");
    scanf("%d",&iNo1);
	
    printf("Enter the End point \n");
    scanf("%d",&iNo2);

    Range(ptr, iSize, iNo1,iNo2);
	
    return 0;
}