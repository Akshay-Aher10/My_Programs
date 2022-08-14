// Accept number from user and display multiplication of that factor

import java.lang.*;
import java.util.*;

class Multiplication
{
	public int iValue;
	
	public Multiplication(int iNo)
	{
		this.iValue =iNo;		
	}
	
	public int MultiFactor()
	{
		int iCnt = 0;
		int iSum = 1;
		
		for(iCnt=1;iCnt<iValue;iCnt++)
		{
			if(iValue%iCnt == 0)
			{
				iSum =iSum*iCnt;
			}
		}
			return iSum;
	}
}

class Assignment1
{
	public static void main(String arr[])
	{
		int iValue=0;
		
		Scanner sobj = new Scanner (System.in);
		
		System.out.println("Enter Number");
		iValue = sobj.nextInt();
		
		Multiplication mobj = new Multiplication(iValue);
		
		int iRet = mobj.MultiFactor();
		
		System.out.println("Multiplication of Fator is: "+iRet);
}
}