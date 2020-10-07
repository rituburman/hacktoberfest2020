import java.io.*;
import java.util.*;   //random number methods
import java.io.*;
import java.math.*;
class VernamCipher
{
public static void main(String args[]) throws IOException
	{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the string");
		String st = br.readLine();
		System.out.println("enter the padding code");
		int pd[]=new int[7];
		int j=0,i=0;
		for(i=0;i<7;i++)
		pd[i]=Integer.parseInt(br.readLine());
		char ch[]=new char[st.length()];
		ch=st.toCharArray();
		int num;
		int send[][]=new int[st.length()][7];
		int receive[][]=new int[st.length()][7];
		int con[]=new int[7];
		System.out.println("Send code:");
		for(i=0;i<st.length();i++)
		{	
		j=6;
		while((int)(ch[i])!=0)
		{	
		con[j]=(int)(ch[i])%2;
		ch[i]=(char)((int)(ch[i])/2);
		send[i][j]=con[j]^pd[j];
		System.out.print(send[i][j]);
		j--;
		}
		System.out.println();
		}
		System.out.println("Received code:");
		for(i=0;i<st.length();i++)
		{	
		j=6;
		while(j>-1)
		{	
		receive[i][j]=send[i][j]^pd[j];
		System.out.print(receive[i][j]);
		j--;
		}
		System.out.println();
		}
		int sum;
		System.out.println("Original data:");
		for(i=0;i<st.length();i++)
		{
		sum=0;
		j=0;
		for(int k=6;k>=0;k--)
		{
		sum+=Math.pow(2,k)*receive[i][j];
		j++;
		}
		System.out.print((char)(sum));
	}
}
}
