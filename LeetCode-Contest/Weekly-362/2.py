class Solution:
    def isReachableAtTime(self, sx: int, sy: int, fx: int, fy: int, t: int) -> bool:
        dist = max(abs(sx - fx), abs(sy-fy))
        if t == 1 and sx == fx and sy == fy:
            return False
        return dist <= t