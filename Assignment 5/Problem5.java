// Accept number from user and display Sum of Non factors 

import java.lang.*;
import java.util.*;

class Maths
{
	public int iValue=0;
	
	public Maths(int iNo)
	{
		this.iValue=iNo;
	}

	
	public int FactDiff()
	{ 
		int iCnt =0;
		int iSumNonFactor =0;
		int iSumFactor =0;
		int iSum=0;
		
		for(iCnt=1;iCnt<iValue;iCnt++)
		{
			if(iValue%iCnt == 0)
			{
				iSumFactor = iSumFactor+iCnt;
				
			}
		}
		System.out.println();
		for(iCnt=1;iCnt<iValue;iCnt++)
		{
			if(iValue%iCnt != 0)
			{
				iSumNonFactor = iSumNonFactor+iCnt;
			}
		}
		return iSum=iSumNonFactor-iSumFactor;		
}
	
	
}

class Assignment5
{
	
	public static void main(String arr[])
	{
		int iNumber =0;
		int iRet =0;
		
		System.out.println("Enter Number");
		
		Scanner sobj = new Scanner(System.in);
		iNumber = sobj.nextInt();
		
		Maths mobj = new Maths(iNumber);
		
		iRet = mobj.FactDiff();
		
		System.out.println("Sum of NonFator is : "+iRet);
	}
	
}