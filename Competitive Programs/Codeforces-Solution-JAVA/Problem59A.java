//Problem59A.java
import java.util.*;
import java.lang.*;

public class Problem59A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();

		char c[] = s.toCharArray();
		int upper=0;
		int lower=0;
		for(int i=0;i<s.length();i++){
			if(Character.isUpperCase(c[i])) upper++;
			if(Character.isLowerCase(c[i])) lower++;
		}

		if(upper > lower){
			System.out.println(s.toUpperCase());
		}else{
			System.out.println(s.toLowerCase());
		}
	}
}