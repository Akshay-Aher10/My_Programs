// Accept number from user and check whether it contains zero in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
	int iZero =1;
	int iDigit =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit==0)
		{
			iZero=iDigit;
		}
		
		iNo=iNo/10;
	}
	
	
	if(iZero==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{

	int iValue =0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = CheckZero(iValue);
	
	if(bRet==true)
	{
		printf("%d Contains Zero in it",iValue);
	}
	else
	{
		printf("%d is not Contains Zero in it",iValue);
	}
}