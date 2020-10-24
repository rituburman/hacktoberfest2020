//Problem266B.java
import java.util.*;
import java.lang.*;

public class Problem266B{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int t = sc.nextInt();

		String s = sc.next();

		char a[] = s.toCharArray();
		// for(int i=0;i<n;i++){
		// 	if(s.charAt(i)=='B' && s.charAt(i+1)=='G'){
		// 		a[i] = 'G';
		// 		a[i+t] = 'B';
		// 	}
		// 	System.out.print(a[i]);
		// }
		int i =1 ;
		while(t-- >= 0){
			if(a[i]=='G' && a[i-1]=='B')
            {
                a[i]='B';
                a[i-1]='G';
                i++;
            }
						
		}
		for(i=0;i<n;i++) System.out.print(a[i]); 
	}
}