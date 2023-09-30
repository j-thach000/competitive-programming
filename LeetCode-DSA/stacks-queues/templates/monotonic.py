# Here's some pseudocode for maintaining a monotonic increasing stack over an input array:

# Given an integer array nums

stack = []
for num in nums:
    while stack.length > 0 and stack.top >= num:
        stack.pop()
    # Between the above and below lines, do some logic depending on the problem
    stack.push(num)