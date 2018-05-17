/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n;
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
        int arr[] = new int[n];
         int arr2[] = new int[n];
         int j=-1;
        for(int i=0;i<n;i++)
        {
        	arr[i]=s.nextInt();
        }
         for (int i = 0; i < n; i++) {
            if (arr[i] == i) { 
            	 j++;
                arr2[j]=i;
               
                }
         }
   if(j>0)
   {
    for(int r=0;r<=j;r++)
    {
    	System.out.print(arr2[r]+" ");
    }
	}
    else	
    {System.out.print(-1);
	}
}}
