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
        for(int i=0;i<n;i++)
        {
        	arr[i]=s.nextInt();
        }
        Arrays.sort(arr);
         for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {                  
                int shiftLeft = j;
                for (int k = j+1; k < n; k++, shiftLeft++) {
                    arr[shiftLeft] = arr[k];
                }
                n--;
                j--;
            }
        }
    }
    for(int r=0;r<n;r++)
    {
    	System.out.println(arr[r]);
    }
	}
    }
