//SampleTest.java
import java.util.*;
import java.lang.*;

public class SampleTest{
	public static void main(String[] args){

		long start = System.nanoTime();

		int sum=0;

		for (int i=0;i<20000 ;i++ ) {
			sum+=i;		
		}	
		
		long end = System.nanoTime();
		long total = end - start;

		long running_time = total/1000;

		System.out.println("Running time of this algorithm is " + running_time + " micro seconds");
	}
}