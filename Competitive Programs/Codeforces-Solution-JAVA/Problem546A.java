import java.util.*;
import java.lang.*;

public class Problem546A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int k= sc.nextInt();
		int n= sc.nextInt();
		int w= sc.nextInt();

		int total = k*w*(w+1)/2;

		if(n - total > 0){
			System.out.println("0");
		}else{
			System.out.println(Math.abs(n - total));
		}
	}
}