class Solution:
    def solve(self, nums):
        if sorted(nums) == nums:
            return True
        if sorted(nums) == nums[::-1]:
            return True
        snums = sorted(nums)
        start = -1
        end = -1
        for i in range(0, len(nums)):
            sn = snums[i]
            n = nums[i]
            if n != sn:
                start = i
                break
        for i in range(len(nums)-1, -1, -1):
            sn = snums[i]
            n = nums[i]
            if n != sn:
                end = i
                break
        if start >= end:
            return True
        while start != end:
            start += 1
            if nums[start-1] < nums[start]:
                return False
        return True
            