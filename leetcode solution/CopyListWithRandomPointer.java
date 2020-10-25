/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;
    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/
// https://leetcode.com/problems/copy-list-with-random-pointer/
class Solution {
    public Node copyRandomList(Node head) {
        if(head == null){
            return null;
        }
        Node newHead=null;
        Node temp=head;
        HashMap<Node,Node> map=new HashMap<>();
        while(temp != null){
            Node newNode=new Node(temp.val);
            map.put(temp,newNode);
            temp=temp.next;
        }
        temp=head;
        
        while(temp != null){
            newHead=map.get(temp);
            newHead.next=map.get(temp.next);
            newHead.random=map.get(temp.random);
            temp=temp.next;
        }
        return map.get(head);
    }
}
