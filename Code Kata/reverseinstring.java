
import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main(String[] args) 
   {
	Ideone obj = new Ideone();
	Scanner sc=new Scanner(System.in);
	String str=sc.nextLine();
	 {
	String[] words = str.split(" ");
	String reversedString = "";
	for (int i = 0; i < words.length; i++)
        {
           String word = words[i]; 
           String reverseWord = "";
           for (int j = word.length()-1; j >= 0; j--) 
	   {
	   	System.out.println(words.length);
             	reverseWord = reverseWord + word.charAt(j);
	   }
	   reversedString = reversedString + reverseWord + " ";
	}
	System.out.println(str);
	System.out.println(reversedString);
   }
   }
}
