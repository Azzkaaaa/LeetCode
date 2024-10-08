class Solution(object):
    def removeElement(self, nums, val):
        k = 1
        if val in nums:
            for i in range(len(nums)):
                for j in range(len(nums) - 1, i, -1):
                    if nums[i] == val and nums[i] != nums[j]:
                        nums[i] = nums[j]
                        nums[j] = 0
                        k += 1
            k = len(nums) - k
        else:
            k = len(nums)
        return k
 


