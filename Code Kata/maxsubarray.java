import java.io.*;
import java.util.*;
class Sidd
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();	
		int max=Integer.MIN_VALUE,min=0;
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=s.nextInt();
		}
	for(int i=0;i<n;i++)
		{
		   min=min+arr[i];
		   if(max<min)
		    max=min;
		    if(min<0)
		    min=0;
		}
		System.out.println(max);
	}
}
