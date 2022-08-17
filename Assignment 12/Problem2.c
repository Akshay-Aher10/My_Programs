// Accept number from user and Display below pattern
// input =3;
// output = 3 # 2 # 1 #

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
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