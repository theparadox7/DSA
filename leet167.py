class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        sum =0
        left = 0
        right = len(numbers)-1
        while left<right:
            sum = numbers[left]+numbers[right]
            if sum == target:
                return [left+1,right+1]
            if sum<target:
                left = left+1
            if sum>target:
                right = right-1
            
