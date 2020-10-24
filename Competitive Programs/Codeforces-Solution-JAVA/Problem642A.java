//Problem642A.java
import java.util.*;
import java.lang.*;

public class Problem642A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		int n[] = new int[t];
		int m[] = new int[t];

		for(int i=0;i<n.length;i++){
			n[i] = sc.nextInt();
			m[i] = sc.nextInt();
		}

		int sum=0;
		int a[] = new int[n.length];
		a[0]=0;
		int c=a[0];
		for(int i=1;i<n.length;i++){
			a[i]=i;
			if(c+a[i]<=m[i]){
				continue;
			}else{
				i=0;
			}
			c=a[i];
		}
		System.out.println(a.length);
	}
}