import java.util.Scanner;

public class Problem50A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int m = sc.nextInt();
		int n = sc.nextInt();

		int noOfDominos = (m*n)/2;

		System.out.println(noOfDominos);

	}
}