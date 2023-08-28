class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Method-01: Counting Method
        // TC: O(n); SC: O(1)
        
//         int zero, one, two;
//         one=zero=two=0;
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(nums[i] == 0)
//             {
//                 zero++;
//             }
//             else if(nums[i] == 1)
//             {
//                 one++;
//             }
//             else{
//                 two++;
//             }
//         }
        
//         int i=0;
//         while(zero--)
//         {
//             nums[i]=0;
//             i++;
//         }
//         while(one--)
//         {
//             nums[i] = 1;
//             i++;
//         }
//         while(two--)
//         {
//             nums[i] = 2;
//             i++;
//         }
        
        // Method-02: Dutch Flag Algorithm (3 pointer Approach)
        
        int low,mid,high;
        low=mid=0;
        high = nums.size()-1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};