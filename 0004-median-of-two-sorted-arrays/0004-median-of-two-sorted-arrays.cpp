class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int s= m+n;
        double finalans = 0;
        vector<double>ans(s);
        for(int i = 0 ;i<m ;i++){
            ans[i] = nums1[i];
           
        }
        for(int i = m ;i<n+m ;i++){
            ans[i] = nums2[i-m];
           
        }
        sort(ans.begin(),ans.end());
        
         for(int i = 0 ;i< n+m ;i++){
            if(s%2 == 0){
                double idx = s/2.0;
                finalans =( ans[idx] + ans[idx-1])/2;
        }
        else{
            double idx = s/2.0;
            finalans = ans[idx];
        }
        }

    return finalans;
    }
};