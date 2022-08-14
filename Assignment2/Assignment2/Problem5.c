//Accept number from user and check whether number is even or odd.

#include<Stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
	
	if((iNo % 2) == 0)
	{
	    
		return TRUE;
		
	}
	else
	{
		return FALSE;
		
	}
	
	
}
	
int main()
{
	int iValue =0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = chkEven(iValue);
	
	if(bRet == TRUE)
	{
		
		printf("Give Number is Even");
	}
	else
	{
		printf("Give Number is odd");
		
	}

	
	return 0;
	
}	
		