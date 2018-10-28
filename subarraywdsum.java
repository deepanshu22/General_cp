package selfpractice;

import java.util.Scanner;

public class subarraywdsum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int sum = s.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = s.nextInt();
		}		
		
		subaaray(arr, sum);
	}

	public static void subaaray(int[] arr, int sum) {

		int csum = 0;
		for (int i = 0; i < arr.length - 1; i++) {
			csum = arr[i];
			for (int j = i + 1; j < arr.length; j++) {
				if (csum == sum) {
					int p = j - 1;
					System.out.print(i + " " + p);
					return;
				}
				if (csum > sum) {
					break;
				}
				csum = csum + arr[j];
			}
		}
		System.out.println("no found");
	}
}