// Accept number from user and display its Non factors 

import java.lang.*;
import java.util.*;

class Maths
{
	public int iValue=0;
	
	public Maths(int iNo)
	{
		this.iValue=iNo;
	}
	
	public void NonFactor()
	{
		int iCnt =0;
		
		for(iCnt=1;iCnt<iValue;iCnt++)
		{
			if(iValue%iCnt != 0)
			{
				
				System.out.println(iCnt);
				
			}
			
		}
		
	}
	
}

class Assignment3
{
	
	public static void main(String arr[])
	{
		int iNumber =0;
		
		System.out.println("Enter Number");
		
		Scanner sobj = new Scanner(System.in);
		iNumber = sobj.nextInt();
		
		Maths mobj = new Maths(iNumber);
		
		mobj.NonFactor();
	}
	
}