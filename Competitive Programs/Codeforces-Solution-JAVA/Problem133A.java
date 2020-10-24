//Problem133A.java
import java.util.*;
import java.lang.*;

public class Problem133A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String p= sc.next();

		if(p.contains("H") || p.contains("Q") || p.contains("9")) System.out.println("YES");
		else if(p.contains("+")||p.contains("="))
            System.out.println("NO");
		else System.out.println("NO");
	}
}