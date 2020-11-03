/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var insertionSortList = function(head) {
  if(!head || !head.next ) return head

  let curr = head.next; // [2]
  let iter; 
  let tail = head;


  while(curr) {
    iter = head;
    tail.next = null
    let prev;

    while(iter && iter.val < curr.val){
      prev = iter
      iter = iter.next;
    }

    if(!iter) {
      tail.next = curr
      tail = curr
      curr = curr.next
    }else{
      if(!prev) {
        head = curr
      }else{
      prev.next = curr;
      }
      temp = curr.next;
      curr.next = iter;
      curr = temp;
    }


  }
  return head
};