import java.util.*;
import java.lang.*;

public class Probelm69A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int arr[][] = new int[n][3];

		
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				arr[i][j]=sc.nextInt();
				//System.out.println(arr[i][j]);
			}
		}
		
		int count=0;
		int sum=0;
		for(int y=0;y<3;y++){
			for(int x=0;x<n;x++){
				sum=sum+arr[x][y];		
			}
			if(sum==0){
				count++;
			}
			sum=0;
		}
		if(count == 3){
			System.out.println("YES");
		}else{
			System.out.println("NO");
		}

	}
}