// Accept number from user and return its multiplication of all its Digits

#include<stdio.h>


int CntOddDigit(int iNo)
{
	int iDigit =0;
	int iOddDigit =0;
	int iMult=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		iMult=iMult*iDigit;
		
		iNo=iNo/10;
	}
	
		return iMult;
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