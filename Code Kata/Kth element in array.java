
import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main(String[] args) 
   {
	Ideone obj = new Ideone();
	Scanner s=new Scanner(System.in);
	int n=s.nextInt();
	int a=s.nextInt();
	int[] arr=new int[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=s.nextInt();
	}
	Arrays.sort(arr);
	System.out.println(arr[a-1]);
}}
