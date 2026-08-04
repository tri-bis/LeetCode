class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int minVal = nums[0];
        int maxVal = nums[n-1];
        cout<<maxVal<<" "<<minVal<<endl;
        vector<int>res;
        for(int i =0;i<n;i++){
           cout<< nums[i]<<" ";
        }
        int k = 1;
        
        for(int i = minVal+1 ; i<maxVal;i++){
           
            if(i == nums[k]){
                k++;
            }
            else{
                res.push_back(i);
            }
        }
        
        return res;
    }
};