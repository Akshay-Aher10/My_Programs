//Accept N number from user and Display Summation of digits of each number;

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;
	int iSum=0;
	int iDigit=0;
  
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {	
			
            while(Arr[iCnt]!=0)
			{
				iDigit=Arr[iCnt]%10;
				
				iSum=iSum+iDigit;
				
				Arr[iCnt]=Arr[iCnt]/10;
			}
              printf("%d\t",iSum);
			  
			  iSum=0;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;   


    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
		printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
	
	DigitSum(ptr, iSize);

	
    return 0;
}