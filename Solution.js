
/**
 * @param {ListNode} currentNode
 * @return {void} 
 */
var deleteNode = function (currentNode) {
    let nextNode = currentNode.next;
    currentNode.val = nextNode.val;
    currentNode.next = nextNode.next;
    nextNode.next = null;
};

/*
 Function ListNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function ListNode(val) {
    this.val = val;
    this.next = null;
}
