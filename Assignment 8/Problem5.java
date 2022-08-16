//Accept N number from user and print elements which are multiples of 11


import java.lang.*;
import java.util.*;

class Number
{
	public void Display(int Brr[])
	{
		System.out.println("Elements are :");
		
		for(int iCnt=0;iCnt<Brr.length;iCnt++)
		{
			if((Brr[iCnt]%11)==0 )
			{
				System.out.println(Brr[iCnt]);
			}

		}
	}
}
class Problem5
{
	
	public static void main(String arr[])
	{
		Number nobj= new Number();
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter Number of Elements");
		int iSize = sobj.nextInt();
		
		int Arr[]= new int[iSize];
		
		System.out.println("Enter Value of Array : ");
		for(int iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]= sobj.nextInt();
		}
		
		nobj.Display(Arr);
	}
}