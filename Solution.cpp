
using namespace std;

/*
Struct ListNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* currentNode) {
        ListNode* nextNode = currentNode->next;
        currentNode->val = nextNode->val;
        currentNode->next = nextNode->next;
        nextNode->next = nullptr;
    }
};
