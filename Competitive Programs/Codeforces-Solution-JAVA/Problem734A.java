//Problem734A.java
import java.util.*;
import java.lang.*;

public class Problem734A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int  n = sc.nextInt();
		String s = sc.next();

		char c[] = s.toCharArray();

		int a = 0;
		int d = 0 ;

		for(int i=0;i<n;i++){
			if(c[i]=='A') a++;
			else d++;
		}
		if(a>d) System.out.println("Anton");
		else if(a<d) System.out.println("Danik");
		else System.out.println("Friendship");

	}
}