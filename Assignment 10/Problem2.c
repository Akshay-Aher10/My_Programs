//Accept N number from user and  accept  one another number as  No and return index of first occurrence.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
	int iIndex = -1;
  
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == iNo)
            {
                iIndex=iCnt;
				
				break;
            }
    }
	
	return iIndex;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    iRet = FirstOcc(ptr, iSize, iValue);
   
		if(iRet==-1)
		{
			printf("There is No Such Number\n");
		}
		else
		{
			printf("First occurrence of number is %d\n",iRet);
		}
      

    return 0;
}