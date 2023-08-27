class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
        int start = 0;
        int end = n-1;
        while(start<end)
        {
            int sum = numbers[start] + numbers[end];
            if(target < sum)
                end--;
            else if(target > sum)
                start++;
            else
                return{start+1, end+1};
                
        }
        return{};
    }
};