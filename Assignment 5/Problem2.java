// Accept number from user and display its factor in Decreasing order

import java.lang.*;
import java.util.*;

class Multiplication
{
	public int iValue;
	
	public Multiplication(int iNo)
	{
		this.iValue =iNo;		
	}
	
	public void Factor()
	{
		int iCnt = 0;
		
		for(iCnt=iValue/2;iCnt>1;iCnt--)
		{
			if(iValue%iCnt == 0)
			{
				System.out.println(iCnt);
			}
		}
	}
}

class Assignment2
{
	public static void main(String arr[])
	{
		int iValue=0;
		
		Scanner sobj = new Scanner (System.in);
		
		System.out.println("Enter Number");
		iValue = sobj.nextInt();
		
		Multiplication mobj = new Multiplication(iValue);
		
		mobj.Factor();
		
	}
}