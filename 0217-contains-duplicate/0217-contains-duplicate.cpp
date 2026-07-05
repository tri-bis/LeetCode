class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 1;
        int n = nums.size();
        int left = 0;
        int right = left + 1;
        sort(nums.begin(),nums.end());
        for(int i  = 0;i<n;i++){
             std::cout<<nums[i];
        }
       
        while ( right <n) {

            if (nums[left] == nums[right]) {
                count++;
                if (count > 1) {
                    return true;
                }
            }
            left++;
            right++;
        }
        return false;
    }
};