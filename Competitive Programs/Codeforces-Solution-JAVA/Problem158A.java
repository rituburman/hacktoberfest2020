import java.util.Scanner;

public class Problem158A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();

		int ctr =0;

		int a[] = new int[n];
		if(n==0 || n<k){
			System.out.println("0");
			
		}
		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();

			if(a[i] >= a[k-1] && a[i] >0){
				ctr++;

			}
			/*
			if(a[i]==0){
				System.out.println("0");
				break;
			}*/
		}
		System.out.println(ctr);
	}
}