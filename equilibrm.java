package selfpractice;

import java.util.Scanner;

public class equilibrm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		
		
		int n = s.nextInt();
		int[]arr = new int[n];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=s.nextInt();
		}
		int x = equi(arr);
		System.out.println(x);
	}
	
	public static int equi(int[]arr)
	{
	      int sum=0;
	      int leftsum=0;
	      for(int i=0;i<arr.length;i++)
	      {
	    	  sum = sum +arr[i];
	      }
	      for(int i=0;i<arr.length;i++)
	      {	    	  
	    	  sum = sum - arr[i];
	    	  
	    	  if(leftsum == sum)
	    	  {
	    		  return i+1;
	    	  }
	    	     leftsum +=arr[i];   	  
	      }
	      return -1;
	}

}
