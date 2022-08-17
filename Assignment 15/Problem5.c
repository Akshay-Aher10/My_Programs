// Accept number of rows and  number of column from user and print below pattern
/*

intput : iRow =4   and  iCol=5

1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iNo=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,iNo=i;j<=iCol;j++)
		{			
			printf("%d\t",iNo);
			iNo=iNo+1;
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