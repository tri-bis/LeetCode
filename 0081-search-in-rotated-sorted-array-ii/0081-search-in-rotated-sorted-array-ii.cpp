class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int maxValIdx = 0;
        int maxVal = 0;
        if (n == 1){
            if(nums[0] == target){return true;}
            else{return false;}
        }
        for ( int i = 0 ;i<n-1 ;i++){
            if(nums[i] > nums[i+1]){
                maxValIdx = i;
               
                 maxVal= nums[i];
                break;
            }
        }
        int left = 0 ;
        int right = maxValIdx;
        
         if(nums[left] <= target && nums[right] >= target){
            while(left <= right){
                int mid = (left + right) / 2;
                if( nums[mid] == target){
                    return true;
                }
                else if( nums [mid]< target){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }
        else{
            left = maxValIdx + 1;
            right = n-1;
            while(left <= right){
                int mid = (left + right) / 2;
                if( nums[mid] == target){
                    return true;
                }
                else if( nums [mid]< target){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};