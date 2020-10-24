import java.util.Scanner;

public class Problem112A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		String a = sc.next();
		String b = sc.next();

		String x = a.toLowerCase();
		String y = b.toLowerCase();

		if(x.compareTo(y) == 0){
			System.out.println("0");	
		}
		if(x.compareTo(y) > 0){
			System.out.println("1");	
		}		
		if(x.compareTo(y) < 0){
			System.out.println("-1");	
		}
		
	}
}