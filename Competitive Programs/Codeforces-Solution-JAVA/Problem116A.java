import java.util.*;
import java.lang.*;

public class Problem116A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		int a[] = new int[n];
		int b[] = new int[n];
		int c[] = new int[n];
		int total[] = new int[n];
		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();
			b[i] = sc.nextInt();
		}
		for(int i=0;i<n-1;i++){
			c[i] = b[i] - a[i+1];
			total[i] = c[i] + b[i+1];
			//System.out.println(total[i]);
		}
		//System.out.println(total);
		 int max = Arrays.stream(total).max().getAsInt(); 
		 System.out.println(max);

	}
}