class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        for i, num in enumerate(nums):
            counter = target - num
            if counter in nums[i + 1:]:
                return [nums.index(num), nums.index(counter, i+1)]
        