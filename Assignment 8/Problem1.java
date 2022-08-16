//Accept N number from user and return difference between  summation  of even elements and  summation of odd elements.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Difference(int Brr[])
	{
		int iEvenSum=0;
		int iOddSum=0;
		int iDiff=0;
		
		for(int iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if((Brr[iCnt]%2)==0)
			{
				iEvenSum=iEvenSum+Brr[iCnt];
			}
		}
		
		for(int iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if((Brr[iCnt]%2)!=0)
			{
				iOddSum=iOddSum+Brr[iCnt];
			}
		}
		
		return iDiff=iEvenSum-iOddSum;
	}
}

class Problem1
{
	public static void main(String arr[])
	{
		int iRet=0;
		
		Numbers nobj = new Numbers();
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number of Element");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize]; 
		
		System.out.println("Enter Value of Array");
		
		for(int iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		
		iRet = nobj.Difference(Arr);
		
		System.out.println("Difference is :"+iRet);
		
	}
	
}