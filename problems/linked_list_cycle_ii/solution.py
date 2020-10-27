class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        slow = head
        fast = head
        while(fast and fast.next):
            fast = fast.next.next
            slow = slow.next
            if(slow == fast):
                slow = head
                while(slow):
                    if(slow == fast):
                        return slow
                    slow = slow.next
                    fast = fast.next
        return None 