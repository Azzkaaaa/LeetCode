x = []
nums = [1,1,2,2]
x += [nums[0]]
for i in range(len(nums)):
    if nums[i] != x[-1]:
        x += [nums[i]]
print(x)