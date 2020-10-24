//Problem.java
import java.util.*;
import java.lang.*;

public class Problem{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		//int m = sc.nextInt();
		int i=1;
		while(true){
			if(i<n){
				System.out.print(i);
				i++;
			}
			else if(i>=n){
				System.out.print(i);
				i--;
			}
			else break;
		}

	}
}