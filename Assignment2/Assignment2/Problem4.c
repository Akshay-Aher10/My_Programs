// Accept two number from user and display first number in second number of time.


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
	int Int =0;
	
	if (iFrequency < 0)
	{
		
		iFrequency= -iFrequency;
		
	}
	
	for(Int=1;Int<=iFrequency;Int++)
	{
		printf("%d\n",iNo);
		
	}
	
	
}

int main()
{
	int iValue =0;
	int iCount =0;
	
	printf("enter Number\n");
	scanf("%d",&iValue);
	
	printf("enter frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
	
}
