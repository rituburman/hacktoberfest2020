import java.util.*;
import java.lang.*;

public class Problem96A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		/*
		int count = 0;

		if(s.contains("0") && s.contains("1")){
		for(int i=0;i<s.length()-1;i++){
			if(count==7){
				
				break;
			}

			if(s.charAt(i)==s.charAt(i+1)){
				count++;
			}
			else{
				count=0;
			}
		}
	}

		if(count<7){
			System.out.println("NO");
		}else{
			System.out.println("YES");
		}*/
		if(s.contains("0000000") || s.contains("1111111")){
			System.out.println("YES");
		}else{
			System.out.println("NO");
		}
	}
}