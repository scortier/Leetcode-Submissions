/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) 
            return NULL;

        Node* curr = head;
        while (curr != NULL) {
            Node* next = curr -> next;
            curr -> next = new Node(curr -> val, next, NULL);
            curr = next;
        }
        curr = head;
        while (curr != NULL) {
            if (curr -> random != NULL)
                curr -> next -> random = curr -> random -> next;
            curr = curr -> next -> next;
        }
        curr = head;
        Node* copyHead = head -> next;
        while (curr != NULL) {
            Node* next = curr -> next -> next;
            Node* copy = curr -> next;
            curr -> next = next;
            if (next != NULL)
                copy -> next = next -> next;
            curr = next;
        }
        return copyHead;
    }
};