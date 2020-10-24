//Problem41A.java
import java.util.*;
import java.lang.*;

public class Problem41A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String t = sc.next();

		StringBuilder t1 = new StringBuilder();
		t1.append(t);
		StringBuilder t2 = new StringBuilder();
		t2.append(s);
		t1.reverse();
		//System.out.println(t1);

		if(t1.toString().equals(t2.toString())) System.out.println("YES");
		else System.out.println("NO"); 
	}
}