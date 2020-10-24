import java.util.*;
import java.lang.*;

public class Problem263A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int i=1;
		int j=1;
		for(i=1;i<=5;i++){
			if(sc.nextInt()==1){
			
				break;
			}
			if(i==5){
				j++;
				i=0;
			}
		}
		System.out.println(Math.abs(i-3)+Math.abs(j-3));
	}
}