//Accept numbers from user and display multiplication of its factor.
//Number -12
// Output - 144(1*2*3*4*6)


#include<stdio.h>

int MultiFactor(int iNo)
{
  int iCnt =0;
  int iMulti =1;
  
  if(iNo<0)
  {
  	iNo=-iNo;
	 	
  }
 	
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {   
	if(((iNo%iCnt)==0) && (iNo!=iCnt) )
  	{   
  	    iMulti=iMulti*iCnt;
  	}
  }   

return iMulti;
}

int main()
{
  int iValue =0;
  int iRet =0;
 
  printf("Enter Number\n");
  scanf("%d",&iValue);
   
   iRet =MultiFactor(iValue);
   
   printf("%d\n",iRet);

  return 0;
}

