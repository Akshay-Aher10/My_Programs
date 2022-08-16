//Accept N number from user and Check whether that number contain 11 int or not

import java.lang.*;
import java.util.*;

class Numbers
{
	public boolean ChkNumber(int Brr[], int iNo)
	{
    int iCnt = 0;
	
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
            if(Brr[iCnt] == 11)
            {
                break;
            }
			
    }
	
		if(iCnt==Brr.length)
		{
        return false;
		}
		else
		{
        return true;
		}
	}
		

}

class Problem3
{
	
	public static void main(String a[])
	{  
		int iNumber =11;
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
		
		boolean bRet = nobj.ChkNumber(Arr,iNumber);
		if(bRet==true)
		{
			System.out.println("number contain 11 in it");
		}
		else
		{
			System.out.println("11 is not contain in it");
		}
		
		
	}
}