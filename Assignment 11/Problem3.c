//Accept N number from user and return the Difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
	int iNo1 =Arr[0];
	int iNo2 =Arr[0];
	int iDiff=0;
  
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {	
            if(Arr[iCnt]<iNo1)
			{
				iNo1=Arr[iCnt];
			}
			else if(Arr[iCnt>iNo2]) 
			{
				iNo2=Arr[iCnt];
			}
    }
	return iDiff=iNo2-iNo1;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;   
    int iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
		printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Difference(ptr, iSize);
	
	printf("Difference is %d\n",iRet);
	
    return 0;
}