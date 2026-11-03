class Solution:
    def minMoves(self, nums: List[int]) -> int:
        maxn=max(nums)
        c=0
        i=0
        while i<len(nums):
            if(nums[i]<maxn):
                c=c+(maxn-nums[i])
            i=i+1
        return c
