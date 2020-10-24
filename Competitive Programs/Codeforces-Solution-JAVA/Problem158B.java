//Problem158B.java
import java.util.*;
import java.lang.*;

public class Problem158B{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n];

		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();
		}
		int count=0;
		int elements[] = {0,0,0,0};
		Arrays.sort(a);
		for(int i=0;i<n;i++){
			if(a[i]==1) elements[0]++;
			if(a[i]==2) elements[1]++;
			if(a[i]==3) elements[2]++;
			if(a[i]==4) elements[3]++;

		}
		int sum=+elements[3]+elements[2]+elements[1]+elements[0];
		if(sum<=4){
			count=1;
			elements[3]=elements[2]=elements[1]=elements[0]=0;
		}
		for(int i=0;elements[0]>0 && elements[2]>0;i++){
			count++;
			elements[0]--;
			elements[2]--;
		}
		for(int i=0;elements[0]>0 && elements[1]>0;i++){
			count++;
			elements[0]--;
			elements[1]--;
		}
		for(int i=0;elements[1]>1;i++){
			count++;
			elements[1]-=2;
		}
		for(int i=0;elements[0]>0;i++){
			if(elements[0]<4){
				count++;
				elements[0]=0;
				break;
			}
			if(elements[0] % 4 ==0){
				count=elements[0]/4;
				elements[0]-=4*count;
				break;
			}else{
				count = elements[0]/4 + elements[0]%4;
				elements[0]=0;
				break;
			}
		}
			// if(elements[0]==4){
			// 	count++;
			// 	elements[0]-=4;
			// 	break;
			// }
			// if(elements[0]==1){
			// 	count++;
			// 	elements[0]-=1;
			// 	break;
			// }
			// else{
			// 	count++;
			// 	elements[0]-=2;
			// }
			
		
		//System.out.println(count+" "+elements[3]+" "+elements[2]+" "+elements[1]+" "+elements[0]);
		count=count+elements[3]+elements[2]+elements[1]+elements[0];
			// System.out.print(a[i] + " ");
			// if(a[i]==4){
			// 	count++;
			// 	continue;
			// }
			// if(i>0 && a[i]+a[i-1]<=4){
			// 	count++;
			// 	continue;
			// }else{
			// 	count++;
			// }
		
		System.out.println(count);
	}
}