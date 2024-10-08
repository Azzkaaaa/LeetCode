class Solution(object):
    def twoSum(self, nums, target):
        for i in range(0, len(nums)):
            for j in range(1, len(nums)):
                x = target - nums[i]
                if x == nums[j] and i != j:
                    return[i, j]



