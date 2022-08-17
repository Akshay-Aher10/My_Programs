// Accept number of rows and  number of column from user and print below pattern
/*

intput : iRow =4   and  iCol=4

A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char Ch ='\0';

	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,Ch='A';j<=iCol;j++,Ch++)
		{
			printf("%c\t",Ch);
		}
		printf("\n");
	}
	
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter number of row\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of column\n");
	scanf("%d",&iValue2);


		Display(iValue1,iValue2);
	
	return 0;
}