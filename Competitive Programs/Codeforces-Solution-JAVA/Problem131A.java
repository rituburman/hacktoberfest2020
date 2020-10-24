//Problem131A.java
import java.util.*;
import java.lang.*;

public class Problem131A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();

		if(s.matches("[A-Z]*")){
			System.out.println(s.toLowerCase());
		}
		else if(s.matches("[a-z][A-Z]*")){
			String a = s.toLowerCase();
			char q = s.charAt(0);
			char w= Character.toUpperCase(q);
			System.out.println(w + ""+a.substring(1,s.length()));	
		}else{
			System.out.println(s);
		}
		
	}
}