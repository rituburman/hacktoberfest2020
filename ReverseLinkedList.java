

import java.util.*;
import java.io.*;

class Node
{
    int data;
    Node next;
    Node(int d)
    {
        data = d;
        next = null;
    }
}

public class ReverseLL
{
    Node head;  // head of lisl
    Node lastNode;
    static PrintWriter out;
    /* Linked list Node*/


    /* Utility functions */

    /* Inserts a new Node at front of the list. */
    public void addToTheLast(Node node)
    {

        if (head == null)
        {
            head = node;
            lastNode = node;
        }
        else
        {
            Node temp = head;
            lastNode.next = node;
            lastNode = node;
        }
    }
    /* Function to print linked list */
    void printList()
    {
        Node temp = head;
        while (temp != null)
        {
            out.print(temp.data+" ");
            temp = temp.next;
        }
        out.println();
    }



    
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        out = new PrintWriter(new BufferedOutputStream(System.out));
        int t= Integer.parseInt(br.readLine());

        while(t>0)
        {
            int n = Integer.parseInt(br.readLine());

           ReverseLL rll = new ReverseLL();
                        String nums[] = br.readLine().split(" ");
            if (n > 0)
            {
                int a1= Integer.parseInt(nums[0]);
                Node head= new Node(a1);
                rll.addToTheLast(head);
            }
            for (int i = 1; i < n; i++)
            {
                int a = Integer.parseInt(nums[i]);
                rll.addToTheLast(new Node(a));
            }


            rll.head = new ReverseLL().reverseList(rll.head);
            
            rll.printList();
            
            t--;
        }
        out.close();
    }
}

// } Driver Code Ends
//function Template for Java

/* Return reference of new head of the reverse linked list 
 class Node {
     int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
} */

class ReverseLL
{
    // This function should reverse linked list and return
   // head of the modified linked list.
   Node reverseList(Node head)
   {
       if(head==null)
       {
           return null;
       }
       if(head.next==null)
       {
           return head;
       }
       
       Stack<Integer> s = new Stack<>();
       Node temp=head;
       while(temp.next!=null)
       {
           s.push(temp.data);
           temp=temp.next;
       }
     s.push(temp.data);
     
     temp = head;
     while(temp.next!=null)
     {
         temp.data= s.pop();
         temp=temp.next;
     }
     temp.data=s.pop();
     return head;  
   }
}


