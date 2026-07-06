class Solution {
public:
    int firstocc(vector<int>& nums, int target){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int result   =-1;
        vector<int>ans;
        while(left<=right){
            int mid  = (left + right) / 2;
            if(nums[mid] == target) {
                result =mid;
                right = mid - 1;
               
                // ans.push_back(first);
                
            }
            else if( nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
            
        }
        return result;
    }
    int lastocc(vector<int>& nums, int target){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int result = -1;
        vector<int>ans;
        while(left<=right){
            int mid  = (left + right) / 2;
            if(nums[mid] == target) {
                result = mid;
                 left = mid + 1;
               
                
                
            }
            else if( nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
            
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first = firstocc(nums,target);
        int last = lastocc(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};