import java.util.Scanner;

public class Problem1A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		long n = sc.nextInt();
		long m = sc.nextInt();
		long a = sc.nextInt();

		long x = n/a;
		long y = m/a;

		System.out.println(x + " "+y);

		if(x*a != n){
			//System.out.println(ar/as);
			x++;
		}
		if(y*a != m){
			//System.out.println((ar/as)+(ar/as));
			y++;
		}
		System.out.println(x*y);

	}
}