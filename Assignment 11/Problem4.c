//Accept N number from user and Display such number which contain 3 digit in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
	int iCount=0;
	int iTemp=0;
  
    for(iCnt =0; iCnt<iLength ; iCnt++)
    {	
			iTemp=Arr[iCnt];
			
            while(Arr[iCnt]!=0)
			{
				iCount++;
				
				Arr[iCnt]=Arr[iCnt]/10;
			}
			
			if(iCount==3)
			{
				printf("%d\t",iTemp);
			}
			
			iCount=0;
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
	
	Digits(ptr, iSize);

	
    return 0;
}