// Accept number from user and count frequency of 4 in it.

#include<stdio.h>
#include<stdbool.h>

int CountFour(long int iNo)
{
	int iFreq =0;
	int iDigit =0;
	int iDigit1 =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	int iTemp =iNo;
	
	while(iNo!=0)//755228
	{
		iDigit =iNo%10;
		
		if(iDigit<6)
		{
			while(iTemp!=0)
			{
				iDigit1=iNo/10;
				if(iDigit1==iDigit)
				{
					iFreq++;
					
				}
				
				iTemp=iTemp/10;
			}
			
			printf("%d\n",iDigit,"%d\n",iFreq);
		}
		
		iNo=iNo/10;
	}
	
	return iFreq;
}
int main()
{

	long int iValue =0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	
	printf("%ld\n",iRet);
	
}