import java.util.*;
import java.lang.*;

public class Problem236A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();

		Set<Character> se = new HashSet<>(); 

		for(int i=0;i<s.length();i++){

			se.add(s.charAt(i));

		}
		int x = se.size();
		 
		if ((x%2)==0){System.out.println("CHAT WITH HER!");
		}else{
		System.out.println("IGNORE HIM!");
		}
	}
}