//Accept N number from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
	int iNo =Arr[0];
	
  
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {	
            if(Arr[iCnt]>iNo)
			{
				iNo=Arr[iCnt];
			}
    }
	return iNo;
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
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Maximum(ptr, iSize);
	
	printf("Largest number is %d\n",iRet);
	
    return 0;
}