// Accept number from user and return its count of Digit betwwen 3 and 7

#include<stdio.h>


int CntRange(int iNo)
{
	int iDigit =0;
	int iRange =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit>3 && iDigit<7)
		{
			iRange++;
		}
		
		iNo=iNo/10;
	}
	
		return iRange;
}
int main()
{

	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CntRange(iValue);
	
	printf("%d",iRet);
	

}