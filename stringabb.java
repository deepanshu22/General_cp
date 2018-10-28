package selfpractice;

import java.util.Scanner;

public class stringabb {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		String str = s.next();
		boolean res = correctstr(str);
		System.out.println(res);

	}

	public static boolean correctstr(String str) {
		boolean ans = false;
		if (str.length() == 0) {
			ans = true;
		}
		char ch = str.charAt(0);
		String ros = str.substring(1);
		if (ch == 'a') {
			if(str.length()==1)
			{
				ans = true;
			}
			else if (str.charAt(1)== 'a') {
				ans =  true;
				correctstr(ros);
			}				
			else if (str.length()>=3 && str.charAt(1) == 'b' && str.charAt(2) == 'b') {
				ros = str.substring(3);
				ans = true;
				correctstr(ros);
			} 
		    else {
			    ans = false;
		   }	
		}
		else{
		     ans=false;
         }
		return ans;
}
}
