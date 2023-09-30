def fast_and_slow_pointers(head):
    slow = head
    fast = head

    while fast and fast.next:
        # Do something here
        slow = slow.next
        fast = fast.next.next