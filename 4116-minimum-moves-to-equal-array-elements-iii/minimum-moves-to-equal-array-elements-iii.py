class Solution:
    def minMoves(self, nums: List[int]) -> int:
        maxn=max(nums)
        c=0
        i=0
        while i<len(nums):
            if(nums[i]<maxn):
                nums[i]=nums[i]+1
                c=c+1
            else:
                i=i+1
        return c
