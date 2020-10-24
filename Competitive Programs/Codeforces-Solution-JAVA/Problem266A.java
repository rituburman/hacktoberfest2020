import java.util.*;
import java.lang.*;

public class Problem266A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s = sc.next();
		int count = 0;
		/*
		ArrayList<Character> al = new ArrayList<>();

		for(int i=0;i<n;i++){
			al.add(s.charAt(i));
		}
		/*
		if(al.get(0)==al.get(1)){

			System.out.println(al.get(1));
			al.remove(1);
		}
		int i=n;
		while(i>0){
			if(al.get(i)==al.get(i-1)){
				al.remove(i);
				count++;
			}
			i--;
		}
		System.out.println(al);
		*/
		char last = s.charAt(0);
		for(int i=1;i<n;i++){
			if(s.charAt(i) == last) count++;
			else last = s.charAt(i);
		}
		System.out.println(count);
	}
}