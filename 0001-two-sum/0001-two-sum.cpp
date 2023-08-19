class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size();i++)
        {
            int element = nums[i];
            for(int j=i+1; j<nums.size();j++)
            {
                if(element + nums[j] == target)
                {
                    
                    ans.push_back(i);
                    ans.push_back(j);
                    // cout<<"["<<element<<"'"<<nums[j]<<"]";
                    
                    break;
                }
            }
        }
        return ans;
    }
};