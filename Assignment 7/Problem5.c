// Accept number from user and return Difference between summation of even and summation of odd digit. 


#include<stdio.h>


int CountDiff(int iNo)
{
	int iDigit =0;
	int iSumEven=0;
	int iSumOdd =0;
	int iDiff =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit%2 == 0)
		{
			iSumEven=iSumEven+iDigit;
		}
		
		if(iDigit%2 != 0)
		{
			iSumOdd=iSumOdd+iDigit;
		}		

		iNo=iNo/10;
	}
			
		return iDiff=iSumEven-iSumOdd;
}
int main()
{

	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("%d",iRet);
	

}