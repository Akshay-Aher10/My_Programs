// Accept number from user and Display Differnece between Summation of all its non factor and factor


#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSNF =0;
	int iSF =0;
	int iDFNF =0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt != 0)
		{
			iSNF=iSNF+iCnt;
		}
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt == 0 && iNo!=iCnt)
		{
			iSF=iSF+iCnt;
		}
	}
	
	iDFNF=iSNF-iSF;
	
	return iDFNF;
	
}

int main()
{
	int iValue =0;
	int iRet =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	
	iRet=SumNonFact(iValue);
	
	printf("Sum of Non Factor is %d\n",iRet);
	
	
	return 0;
}