//accept no from user and print that no of even numbers on screen.


import java.lang.*;
import java.util.*;

class Even
{
	
	public void PrintEven(int iNo)
	{
		int iCnt =0;
		
		if(iNo<=0)
		{
			System.out.println("invalid number");
			return;
		}
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if(iCnt%2==0)
			{
				System.out.println(iCnt);
			}
		}
	}
}

class problem1
{
	public static void main(String a[])
	{
		Even eobj = new Even();
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		
		int iValue = sobj.nextInt();
		
		eobj.PrintEven(iValue);
	}
}