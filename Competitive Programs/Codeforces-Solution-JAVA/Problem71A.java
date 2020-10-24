import java.util.Scanner;

public class Problem71A{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		double n = sc.nextInt();
		//String s[] = new String[n];
		/*
		for(int i=0;i<n;i++){
			s[i] = sc.next();
		}*/
		String s=null;
		for(int i=0;i<n;i++){
			s = sc.next();

			
			/*
			if(s[i].length() == 11){
				System.out.println(s[i].charAt(0)+"10");
			}*/
			if(s.length() > 10){
				//String s = s[i].charAt(0);
				//String e = s[i].charAt(i);
				//String value = s[i].substring(1,x-1);

				System.out.print(s.charAt(0));
				System.out.print(s.length()-2);
				System.out.println(s.charAt((s.length())-1));

			}
			else{
				System.out.println(s);
			}
		}
	}
}