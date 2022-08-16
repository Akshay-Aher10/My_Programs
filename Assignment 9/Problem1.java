//Accept N number from user and return frequency of even numbers.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Frequency(int Brr[])
	{
		int iFrequency =0;
		
		for(int iCnt=0; iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt]%2==0)
			{
				iFrequency++;
			}
		}
		
		return iFrequency;
	}
}

class Problem1
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
		
		System.out.println("Frequency of even number is "+iRet);
		
	}
}