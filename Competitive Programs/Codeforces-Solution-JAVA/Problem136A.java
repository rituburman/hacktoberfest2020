//Problem136A.java
import java.util.*;
import java.lang.*;

public class Problem136A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n];

		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();
			//System.out.println(a[i]);
		}
		int b[] = new int[n];
		for(int i=0;i<n;i++){
			int c = a[i];
			b[c-1] = i+1;
		}
		for(int i=0;i<n-1;i++){
			System.out.print(b[i] + " ");
		}
		System.out.print(b[n-1]);


	}
}