// Accept number from user and return its count of even Digit

#include<stdio.h>


int CntEventDigit(int iNo)
{
	int iDigit =0;
	int iEvenDigit =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit =iNo%10;
		
		if(iDigit%2 == 0)
		{
			iEvenDigit++;
		}
		
		iNo=iNo/10;
	}
	
		return iEvenDigit;
}
int main()
{

	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CntEventDigit(iValue);
	
	printf("%d",iRet);
	

}