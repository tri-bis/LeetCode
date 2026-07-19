class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // cout << s << " " << t;
        // if (s != t) {
        //     return false;
        // }
        // return true;


        if(s.length() == t.length()){
            vector<int>count(26);
            int i = 0;
            while(i< s.length()){
                int idx = s[i] - 'a';
                count[idx]++;
                i++; 
            }
            int j =0;
            while(j< t.length()){
                int idx = t[j] - 'a';
                if(count[idx] == 0){
                    return false;
                }
                else{
                    count[idx]--;
                }
              j++;   
            }
        }else{
            return false;
        }
    return true;
    }
};