class Solution {
    void mergeCombined(vector<int>& nums,int mid , int s, int e){
        int i = s;
        int j = mid +1;
        vector<int>temp;
        while(i<= mid && j <= e){
            if(nums[i] < nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=  mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=  e){
            temp.push_back(nums[j]);
            j++;
        }
        for( int i = 0 ;i<temp.size();i++){
            nums[i+s] = temp[i];
        }
    }
    void mergeSort(vector<int>& nums, int s, int e){
        if(s>=e){
            return;
        }   
        int mid = (s + e)/2;
        mergeSort(nums, s , mid);
        mergeSort(nums , mid+1, e);

        mergeCombined(nums, mid, s,e);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        mergeSort(nums, s,e);
        return nums;
    }
};