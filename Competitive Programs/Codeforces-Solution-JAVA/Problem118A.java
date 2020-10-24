import java.util.Scanner;

public class Problem118A{
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		String s = sc.next();

		int x = s.length();
		//Character chars[] = new Character[x];
		for(int i=0;i<x;i++){
	
			if(s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' || s.charAt(i) == 'U' ||
				s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u'
				|| s.charAt(i) == 'y' || s.charAt(i) == 'Y'){
				
				continue;

			}else{

				//chars[i] = Character.toLowerCase(s.charAt(i));

				System.out.print(".");
				int c = (int)s.charAt(i);

				if(c>=65 && c<=90){
					c = c +32;
					System.out.print((char)c);
				}else{
					System.out.print(s.charAt(i));
				}
			}

		}
		

	}
}