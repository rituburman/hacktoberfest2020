import java.util.*;
import java.lang.*;

public class Problem58A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();

		// Set<Character> set = new HashSet<>();

		// for(int i=0;i<s.length();i++){
		// 	if(s.charAt(i)=='h' || s.charAt(i)=='e' || s.charAt(i)=='l'|| s.charAt(i)=='l' || s.charAt(i)=='o'){
		// 		set.add(s.charAt(i));
		// 	}
		// }

		char[] a={'h','e','l','l','o'};
		int j=0;
		for(int i=0;i<s.length();i++){
			if(s.charAt(i) == a[j]){
				j++;
				if(j==4) break;
				else continue;
			}
		}
		if(j<4) System.out.println("NO");
		else System.out.println("YES");
	}
}