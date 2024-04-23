def prefix_sum(nums):
    prefix = [nums[0]]
    for i in range(1, len(nums)):
        prefix.append(nums[i] + prefix[-1]) # keep adding the last prefix element to nums[i]
                                            # the last element of prefix represents the sum up to i - 1