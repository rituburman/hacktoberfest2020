//Problem580A.java
import java.util.*;
import java.lang.*;

public class Problem580A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i=0; i<arr.length; i++)
		    arr[i] = sc.nextInt();
		int max = 1;
		int count = 1;
		for(int i=1; i<arr.length; i++){
		    if(arr[i-1]<=arr[i]){
		        ++count;
    		    if(count>max)
    		        max = count;
		    }
		    else
		        count = 1;
		}
		System.out.println(max);

	}
}