import java.util.*;
class GFG {

	static ArrayList<Integer> mergeTwo(List<Integer> A,
									List<Integer> B)
	{
	
		int m = A.size();
		int n = B.size();


		ArrayList<Integer> D = new ArrayList<Integer>(m + n);

		int i = 0, j = 0;
		while (i < m && j < n) {

			if (A.get(i) <= B.get(j))
				D.add(A.get(i++));
			else
				D.add(B.get(j++));
		}

	
		while (i < m)
			D.add(A.get(i++));

		
		while (j < n)
			D.add(B.get(j++));

		return D;
	}

	public static void main(String[] args)
	{
		Integer[] a = { 1, 2, 3, 5 };
		Integer[] b = { 6, 7, 8, 9 };
		Integer[] c = { 10, 11, 12 };
		List<Integer> A = Arrays.asList(a);
		List<Integer> B = Arrays.asList(b);
		List<Integer> C = Arrays.asList(c);

		ArrayList<Integer> T = mergeTwo(A, B);

		
		System.out.println(mergeTwo(T, C));
	}
}

