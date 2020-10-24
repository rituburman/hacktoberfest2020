//Problem271A.java
import java.util.*;
import java.lang.*;

public class Problem271A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int y = sc.nextInt();

		

		while(true){
			y+=1;
			String s = Integer.toString(y);	
			
			if(s.charAt(0) != s.charAt(1) && s.charAt(0) != s.charAt(2) && s.charAt(0) != s.charAt(3) &&
			s.charAt(1) != s.charAt(2) && s.charAt(1) != s.charAt(3) && s.charAt(2) != s.charAt(3))
			break;
		}
		System.out.println(y);
	}
}