/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class weird_coins
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int i,n,a,m,t,j,b;
		
		Scanner obj = new Scanner(System.in);
		t = obj.nextInt();
		int[] arr = new int[t];
		
		for(j=0;j<t;j++)
		{
		    m = obj.nextInt();
		    n = obj.nextInt();
		    
		    a = obj.nextInt();
		    
		    for(i=0;i<((m*n)-1);i++)
		    {
		        a = obj.nextInt();
		    }
		    
		    if(n%2 == 0)
		    {
		        b = a*(m*n) - (a*m) + a;
		    }
		    
		    else
		    {
		        b = a*(m*n);
		    }
		    
		    arr[j] = b;
		}
		
		for(i=0;i<t;i++)
		{
		    System.out.println(arr[i]);
		}
	}
	
}
