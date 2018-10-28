package selfpractice;

import java.util.Scanner;

public class missingnumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       Scanner s = new Scanner(System.in);
       int t = s.nextInt();
       while(t--> 0){
       int n = s.nextInt();
       int[]arr = new int[n];
       n = arr.length;
       for(int i=0;i<n-1;i++)
       {
    	   arr[i] = s.nextInt();
       }
       missingno(arr,n);
       }
	}
    public static void missingno(int[]arr,int n)
    {

    	int total = (n*(n+1))/2;
        
    	for(int i=0;i<arr.length-1;i++)
    	{
    		total = total - arr[i];
    	}
    	System.out.println(total);
    }
}
