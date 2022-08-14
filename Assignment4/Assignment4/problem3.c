//Accept numbers from user and display its non factors
//Number -12
// Output - 6 4 3 2 1


#include<stdio.h>

int MultiFactor(int iNo)
{
  int iCnt =0;

  
  if(iNo<0)
  {
  	iNo=-iNo;
	 	
  }
 	
  
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {   
	if((iNo%iCnt)!=0)
  	{   
  	    printf("%d\n",iCnt);
  	}
  }   

}

int main()
{
  int iValue =0;
  int iRet =0;
 
  printf("Enter Number\n");
  scanf("%d",&iValue);
   
  MultiFactor(iValue);
   


  return 0;
}



