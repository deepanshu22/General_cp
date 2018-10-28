package selfpractice;

import java.util.Scanner;

public class hotels {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int d = s.nextInt();
		int[] arr = new int[n];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			arr[i] = s.nextInt();
		}
		for (int i = 0; i < arr.length-1; i++) {
			if (arr[i] + d == arr[i + 1] - d) {
				ans++;
			} else if ((arr[i] + d) < (arr[i + 1] - d)) {
				ans = ans + 2;
			} else {
				ans = ans;
			}
		}
		System.out.println(ans + 2);

	}
}
