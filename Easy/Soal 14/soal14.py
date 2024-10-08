# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        n = head
        if head is None:
            return head
        while n is not None and n.next is not None:
            if n.val == n.next.val:
                n.next = n.next.next
            else:
                n = n.next
        return head