class Solution(object):
    def searchInsert(self, nums, target):
        index = 0
        for i in range(len(nums)):
            if target == nums[i]:
                return index
            index += 1
        if target < nums[0]:
            return 0
        elif target > nums[len(nums) - 1]:
            index = len(nums)
            return index
        else:
            index = 1
            for i in range(1, len(nums)):
                if nums[i - 1] < target < nums[i]:
                    return index
                index += 1