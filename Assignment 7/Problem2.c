// Accept number from user and return its count of odd Digit

#include<stdio.h>


int CntOddDigit(int iNo)
{
	int iDigit =0;
	int iOddDigit =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit%2 != 0)
		{
			iOddDigit++;
		}
		
		iNo=iNo/10;
	}
	
		return iOddDigit;
}
int main()
{

	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CntOddDigit(iValue);
	
	printf("%d",iRet);
	

}