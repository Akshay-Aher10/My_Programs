//Accept N number from user and return frequency of 11 from it.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Frequency(int Brr[])
	{
		int iFrequency =0;

		
		int iDFrequency =0;
		
		for(int iCnt=0; iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt] == 11)  
			{
				iFrequency++;
			}
		}
		
		
		return iFrequency;
	}
}

class Problem4
{
	
	public static void main(String a[])
	{
		Numbers nobj = new Numbers();
		Scanner sobj =new Scanner(System.in);
		
		System.out.println("Enter Number of Elements");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter Elements of Array");
		
		for(int iCnt=0;iCnt<iSize;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();	
		}
		
		int iRet = nobj.Frequency(Arr);
		
		System.out.println("Frequency of 11 is = "+iRet);
		
	}
}