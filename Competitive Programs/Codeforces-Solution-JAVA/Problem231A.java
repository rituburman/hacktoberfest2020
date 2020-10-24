import java.util.Scanner;

public class Problem231A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int arr[] = new int[3];
		int count=0;

		for(int i=0;i<n;i++){

			for(int j=0;j<3;j++){
				arr[j] = sc.nextInt();
			}

			if(arr[0]+arr[1]+arr[2]>=2){
				count++;
			}else{
				continue;
			}



		}
			System.out.println(count);
	}
}