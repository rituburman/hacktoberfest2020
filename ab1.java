// Observation how list works in JAVA
import java.util.*;
class test{
	public static void main(String[] args) {
		List<String> list = new ArrayList<String>();  
		list.add("Mango");  
		list.add("Apple");  
		list.add("Banana");  
		list.add("Grapes");
		list.add("Pineapple");
		list.add("Guava");
		System.out.println("List element printed using for each loop\n");  
		for(String fruit:list)  
			System.out.print(fruit+" ");
		System.out.println();
	}
}
