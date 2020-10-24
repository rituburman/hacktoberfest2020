import java.util.*;
import java.lang.*;

public class Problem281A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		String s = sc.next();

		char a = s.charAt(0);
		char b = Character.toUpperCase(a);
		System.out.println(b+""+s.substring(1));
	}
}