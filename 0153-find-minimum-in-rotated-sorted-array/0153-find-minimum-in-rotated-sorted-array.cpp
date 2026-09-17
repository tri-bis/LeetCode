class Solution {
public:
int minimum(int s, int e,vector<int> nums ){
    int mid = (s+e)/2;
    if(s==e){
        return nums[mid];
    }
    else if(nums[s] <= nums[mid] && nums[e] <= nums[mid]){
        return minimum(mid+1 , e ,nums);
    }
    else{
         return minimum(s, mid ,nums);
    }
}
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return(nums[0]);

        int s = 0;
        int e = nums.size()-1;
        return minimum(s,e,nums);
    }
};