// Accept number from user and Display below pattern
// input =3;
// output = 1 # 2 # 3 #

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=(iNo*2);iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}
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