class Solution:
    def numberOfPoints(self, nums: List[List[int]]) -> int:
        covered = set()
        min = 0
        max = 0
        for car in nums:
            for i in range(car[0], car[1] + 1):
                covered.add(i)
        print(covered)
        return len(covered)