import java.util.*;
import java.lang.*;

public class Problem977A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();

		//int x = n%10;

		for(int i=0;i<k;i++){
			if(n%10 == 0) n/=10;
			else{
				n-=1;
			}
		}
		System.out.println(n);
	}
}