class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode curr = head;
        ListNode prev = null;
        ListNode next;
        while(curr!=null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
}

OUTPUT :-

TEST CASE 1:-[5,4,3,2,1]
TEST CASE 2:-[2,1]
TEST CASE 3:- []
