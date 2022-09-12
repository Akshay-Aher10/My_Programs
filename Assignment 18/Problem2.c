// Accept number of rows and  number of column from user and print below pattern
/*

intput : iRow =5   and  iCol=5

*       *       *       *       #
*       *       *       #       @
*       *       #       @       @
*       #       @       @       @
#       @       @       @       @
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<= iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{	
			if(i==j)
			{
				printf("#\t");
			}
			else if(j>i)
			{
				printf("*\t",j);
			}
			else if(i>j)
			{
				printf("@\t",j);
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