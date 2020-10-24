//Problem110A.java
import java.util.*;
import java.lang.*;

public class Problem110A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		//double n = sc.nextInt();
		String s = sc.next();
		int count=0;

		//String s = Double.toString(n);
		//System.out.println(s);

		for(int i=0;i<s.length();i++){
			if(s.charAt(i)=='4' || s.charAt(i)=='7') count++;
		}	
		//System.out.println(count);
		if(count == 4 || count == 7) System.out.println("YES");
		else System.out.println("NO");
	}
}