# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        newNode = ListNode(0)
        requiredNode = newNode
        while(True):           
            if(not l2):
                requiredNode.next = l1
                break
            if(not l1):
                requiredNode.next = l2
                break
            if(l1.val > l2.val):
                requiredNode.next = ListNode(l2.val)
                l2 = l2.next
            else:
                requiredNode.next = ListNode(l1.val)
                l1 = l1.next
            requiredNode = requiredNode.next
        return newNode.next