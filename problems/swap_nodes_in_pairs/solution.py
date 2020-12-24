class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        curr = res = ListNode(-1, head)

        while curr.next and curr.next.next:
            first, second = curr.next, curr.next.next
            following = second.next

            curr.next, second.next, first.next = second, first, following

            curr = first

        return res.next 