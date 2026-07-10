class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int left = 0;
        int right = left + 1;
        int k = 1;
        while(right < n){
            if(nums[left] == nums[right]){
                if(count < 2){
                    k++;
                    count++;
                    nums[left+1] = nums[right];
                    left++;
                    right++;
                    
                   
                }
                else{
                    right++;
                }
            }
            else{
                count = 1;
                k++;
                nums[left+1] = nums[right];
                left++;
                right++;
            }
        }
        cout<<endl<<k;
        return k;
    }
};