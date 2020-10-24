import java.util.Scanner;

public class Problem282A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int x =0;
		if(n>150) return;

		for(int i=0;i<n;i++){

			String s = sc.next();
			
			if(s.equals("X++") || s.equals("++X")){
				x++;
			
			}
			/*
			if(s.equals("++X")){
				++x;

			}*/
			if(s.equals("X--") || s.equals("--X") ){
				x--;
			}
			/*
			if(s.equals("--X")){
				--x;
			}*/
			//System.out.println(x);
		}
		System.out.println(x);
	}
}