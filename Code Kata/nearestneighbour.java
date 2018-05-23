import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s=new Scanner(System.in);
		int n,a;
		n=s.nextInt();
		a=s.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
		    arr[i]=(s.nextInt()-a);
		    if((arr[i]+a)==a)
		   {
		   	arr[i]=Integer.MIN_VALUE;
		   }
		}
		Arrays.sort(arr);
		for(int i=1;i<4;i++)
		{
			System.out.print((arr[i]+a)+"\t");
		}
		
	
		
	}
}
