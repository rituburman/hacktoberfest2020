import java.util.*;
import java.lang.*;

public class Problem617A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();

		int a[] = {5,4,3,2,1};
		int count =0 ;
		int sum=0;
		int i=0;
		while(n > 0){
			
			n=n-a[i];
			count++;
		}
		System.out.println(count);	


	}
}