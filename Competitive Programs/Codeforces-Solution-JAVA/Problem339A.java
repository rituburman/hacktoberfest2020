import java.util.*;
import java.lang.*;

public class Problem339A{

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);

		String s = sc.next();

		ArrayList<Integer> al = new ArrayList<>();

		for(int i=0;i<s.length();i=i+2){
			al.add(Integer.parseInt(s.valueOf(s.charAt(i))));
			//Arrays.sort(a);
			Collections.sort(al);
			//System.out.println(al);
		}
		/*
		//System.out.println(Arrays.sort(a));
		for(int i=0;i<5;i=i+1){
			//a[i] = Integer.parseInt(s.valueOf(s.charAt(i)));
			//Arrays.sort(a);
			int temp=0;
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
			System.out.println(a[i]);
		}*/
		int size = al.size();
		//System.out.println(size);
		for(int j=0;j<size-1;j++){
			System.out.print(al.get(j)+"+");
		}
		System.out.print(al.get(size-1));
	}

}