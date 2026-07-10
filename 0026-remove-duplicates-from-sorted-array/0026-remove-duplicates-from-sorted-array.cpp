class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int left = 0;
        int right = left + 1;
        while(right<n){
            if(nums[left] != nums[right]){
                count++;
                nums[left + 1] = nums[right];
                left++;
                right++;
            }
            else{
                right++;
            }
        }
        return count;
    }
};