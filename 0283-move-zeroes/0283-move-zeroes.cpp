class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int right, left;
        right = left = 0;
        while(left <= right && right<nums.size())
        {
            if(nums[right] == 0)
            {
                right++;
            }
            else if(nums[right] != 0)
            {
                swap(nums[right], nums[left]);
                right++;
                left++;
            }
        }
    }
};