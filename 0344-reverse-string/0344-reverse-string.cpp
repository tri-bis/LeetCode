class Solution {
    
        vector<int>ans;
        void prChar(vector<char>& s, int right,int left){
            
            if(left > right){
                return ;
            }
            
            swap(s[left],s[right]);
            left++;
            
            prChar(s,right-1,left);
        }
public:
    void reverseString(vector<char>& s) {
        int right = s.size() - 1;
        int left = 0;
        prChar(s, right, left);
    }
};