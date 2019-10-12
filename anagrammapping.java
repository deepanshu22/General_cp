package hashmaps;

import java.util.HashMap;
import java.util.Scanner;

public class anagrammapping {
	public static int[] anagramMappings(int[] A, int[] B) {
		// Write your code here
		HashMap<Integer, Integer> hm = new HashMap<>();

		for (int i = 0; i < B.length; i++) {
			hm.put(B[i], i);
		}
		int[] temp = new int[A.length];
		for (int i = 0; i < A.length; i++) {
			if (hm.containsKey(A[i])) {
				temp[i] = hm.get(A[i]);
			}
		}
		return temp;

	}

	// Don't make any changes here
	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] a = new int[n];
		int[] b = new int[n];
		for (int i = 0; i < a.length; i++) {
			a[i] = s.nextInt();
		}
		for (int j = 0; j < b.length; j++) {
			b[j] = s.nextInt();
		}
		int[] res = anagramMappings(a, b);
		for (int j = 0; j < res.length; j++) {
			System.out.print(res[j] + " ");
		}
	}
}
