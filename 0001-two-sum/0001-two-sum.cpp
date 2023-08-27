class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> value;
        for(int i=0; i<nums.size(); i++)
        {
            int remaining = target - nums[i];
            if(value.find(remaining) != value.end())
                return{value[remaining],i};
            value[nums[i]] = i;
        }
        return {};
    }
};