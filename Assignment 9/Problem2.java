//Accept N number from user and return difference between frequency of even numbers and frequency of odd numbers.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Frequency(int Brr[])
	{
		int iEFrequency =0;
		int iOFrequency =0;
		
		int iDFrequency =0;
		
		for(int iCnt=0; iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%2==0)
			{
				iEFrequency++;
			}
		}
		
		for(int iCnt=0; iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%2!=0)
			{
				iOFrequency++;
			}
		}		
		
		return iDFrequency=iEFrequency-iOFrequency;
	}
}

class Problem2
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
		
		System.out.println("Difference is "+iRet);
		
	}
}