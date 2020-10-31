/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        
        if (root == null) return Collections.EMPTY_LIST;
        
        List<Integer> answer = new ArrayList<Integer>();
        
        Deque<TreeNode> deque = new LinkedList<TreeNode>();
        
        deque.add(root);
        
        while (!deque.isEmpty()) {
            
            answer.add(deque.peekLast().val);
            
            int size = deque.size();
            
            for (int i = 0; i < size; i++) {
                
                TreeNode currNode = deque.poll();
                
                if (currNode.left != null) deque.add(currNode.left);
                if (currNode.right != null) deque.add(currNode.right);
            }
            
        }
        
        return answer;
        
    }
}
