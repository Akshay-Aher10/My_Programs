//Accpet number from user and display its Digit in reverse order

 #include<Stdio.h>
 
 void DisplayDidigt(int iNo)
 {
	int iDigit =0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}	
	 
	 while(iNo!=0)
	 {
		iDigit=iNo%10; 
		
		printf("Digits Are : %d\n",iDigit);
		
		iNo = iNo/10;
		 
	 }
 }
 
 int main()
 {
	int iValue =0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayDidigt(iValue);

	
	 
	 return 0;
 }