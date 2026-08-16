class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int total =0 ;
        
        for(int num:nums){
            total ^= num;
            
            
        }
         int a  = 0 , b = 0;
        int dbit = total & (-(unsigned int)total);
            
            for(int num:nums){
                if ( dbit & num){
                    a^= num;
                }else{
                    b^= num;
                }
            }
        return {a,b};
    }
};