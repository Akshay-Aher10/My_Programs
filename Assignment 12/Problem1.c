// Accept number from user and Display below pattern
// input =5;
// output = A B C D E

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char iChar='A';
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",iChar);
		iChar++;
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter Number of Row\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}