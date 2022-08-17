// Accept number of rows and  number of column from user and print below pattern
/*

intput : iRow =4   and  iCol=5

2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9


*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int iNo1=0;
	int iNo2=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,iNo1=1,iNo2=2;j<=iCol;j++)
		{
			if((i%2)==0)
			{			
				printf("%d\t",iNo1);
				iNo1=iNo1+2;
			}	
			else
			{
				printf("%d\t",iNo2);
				iNo2=iNo2+2;
			}
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