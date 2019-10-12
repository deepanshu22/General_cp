package june30;

import java.util.ArrayList;
import java.util.Scanner;

public class permutationsstring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		String str = s.next();
		ArrayList<String> ans = permutations1(str);
		System.out.println(ans.size());
		System.out.println(ans);
		permutations(str, "");

	}

	public static ArrayList<String> permutations1(String str) {
		if (str.equals("")) {
			ArrayList<String> bres = new ArrayList<>();
			bres.add("");
			return bres;
		}

		char ch = str.charAt(0);
		String rs = str.substring(1);
		ArrayList<String> list1 = permutations1(rs);
		ArrayList<String> mres = new ArrayList<>();

		for (String rstr : list1) {
			for (int i = 0; i <= rstr.length(); i++) {
				String left = rstr.substring(0, i);
				String right = rstr.substring(i);
				mres.add(left + ch + right);
			}
		}
		return mres;
	}

	public static void permutations(String ques, String ans) {

		if (ques.length() == 0) {
			System.out.println(ans);
			return;
		}

		boolean[] arr = new boolean[26];

		for (int i = 0; i < ques.length(); i++) {
			char ch = ques.charAt(i);
			int j = ch - 'a';

			if (arr[j]) {
				continue;
			}
			arr[j] = true;

			String ros = ques.substring(0, i) + ques.substring(i + 1);
			permutations(ros, ans + ch);
		}
	}
}
