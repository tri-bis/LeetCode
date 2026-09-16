class Solution {
    int search(int si, int ei, vector<int> nums,int target){
        int mid = (si + ei)/2;
        if(si>ei){
            return -1;
        }
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[si] <= nums[mid]){
            //l1
            if(nums[si] <= target && target <= nums[mid]){
                return search(si,mid-1,nums,target);
            }
            else{
                return search(mid+1,ei,nums,target);
            }
        }
        else{
            //l2
            if(nums[mid] <= target && target<= nums[ei]){
               return search(mid+1,ei,nums,target);
            }
            else{
               return search(si,mid-1,nums,target);
            }
        }
    }
public:
    int search(vector<int>& nums, int target) {
        int si = 0;
        int ei = nums.size()-1;
        return search(si,ei,nums,target);
    }
};