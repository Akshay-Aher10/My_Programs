//accept no from user and print event factors of that number.

import java.lang.*;
import java.util.*;

class EvenFactor
{
	public static void EvnFact(int iNo)
	{
		int iCnt = 0;
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt==0)&&(iCnt%2==0))
			   {
				   System.out.println(iCnt);  
			   }
		}
	}	
}

class problem2
{
	public static void main(String a[])
	{
		EvenFactor eobj = new EvenFactor();
		 
		Scanner sobj =new Scanner(System.in);
		
		System.out.println("Ener Number");
		int iValue = sobj.nextInt();
		
		eobj.EvnFact(iValue);
	}
}




