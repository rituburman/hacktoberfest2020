import java.util.*;
import java.lang.*;

public class Problem160A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		int a[] = new int[n];
		int sum=0;
		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();
			sum+=a[i];
		}

		if(n==2 || n==1){
			System.out.println(n);
		}else{

		int x = sum/2;
		if(x*2!=sum) x++;
		//System.out.println(x);
		int sum1=0;
		int ans = 0;
		Arrays.sort(a);

		for(int i=n-1;i>0;i--){
			sum1+=a[i];
			if(sum1>x){
				ans++;
			 	break;
			 }
			 else ans++;
		}
		System.out.println(ans);
		}
	}
}