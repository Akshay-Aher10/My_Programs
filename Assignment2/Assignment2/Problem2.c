// Accpet one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
	int iCnt =0;
	
	iCnt=0;
	
	while(iNo> iCnt)
	{
		printf("*");
		
		iNo--;
		
	}
	
	
}

int main()
{
	int iValue =0;
	
	printf("enter Number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
	
}
