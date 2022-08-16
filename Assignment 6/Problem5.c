// Accept number from user and count frequency of such digits which are less than 6

#include<stdio.h>
#include<stdbool.h>

int CntFrequecy(long int iNo)
{
	int iFreq =0;
	int iDigit =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit<6)
		{
			iFreq++;
		}
		
		iNo=iNo/10;
	}
	
	return iFreq;
}
int main()
{

	int iValue =0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CntFrequecy(iValue);
	
	printf("%d and %d\n",iRet,iValue);
	
}