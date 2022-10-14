
public class Solution {

    public void deleteNode(ListNode currentNode) {
        ListNode nextNode = currentNode.next;
        currentNode.val = nextNode.val;
        currentNode.next = nextNode.next;
        nextNode.next = null;
    }
}

/*
Class ListNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class ListNode {

    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}
