class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size(); i = i + 3) {

            if (i+1 >= nums.size()|| nums[i] != nums[i + 1]) {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};