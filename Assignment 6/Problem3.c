// Accept number from user and count frequency of 2 in it.

#include<stdio.h>
#include<stdbool.h>

int CheckFrequency(long int iNo)
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
		
		if(iDigit==2)
		{
			iFreq++;
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
	
	iRet = CheckFrequency(iValue);
	
	printf("Frequency of 2 is%ld\n",iRet);
	
}