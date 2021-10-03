/*Write a program in java to initialize an integer value n and compute 2048n ,
(1/912)n using shift operator.*/
package assignment1;
import java.util.Scanner;
public class ShiftOperator {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	
	System.out.print("entrer the value of n:" );
	int n = sc.nextInt();
	int a = n << 11;
	int b = n >> 9;
	
	
	
	System.out.println("2048n = " + a + "\n (1/512)n ="+ b);
	

	}

}
