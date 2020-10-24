import java.util.*;
import java.lang.*;

public class Problem791A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int years = 0;
		while(a<=b){ 
			a=a*3;
			b=b*2;
			years++;

		}
		System.out.println(years);	
	}
}