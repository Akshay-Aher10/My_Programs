//Accept N number from user and  accept  one another number as  No and return  frequency  of  no  from it.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Frequency(int Brr[], int iNo)
	{
		int iFrequency =0;

		
		int iDFrequency =0;
		
		for(int iCnt=0; iCnt<Brr.length;iCnt++)
		{
			if(Brr[iCnt] == iNo)  
			{
				iFrequency++;
			}
		}
		
		
		return iFrequency;
	}
}

class Problem5
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
		
		System.out.println("Enter Number to find");
		int iNumber = sobj.nextInt();
		
		int iRet = nobj.Frequency(Arr,iNumber);
		
		System.out.println("Frequency of "+iNumber+" is "+iRet);
		
	}
}