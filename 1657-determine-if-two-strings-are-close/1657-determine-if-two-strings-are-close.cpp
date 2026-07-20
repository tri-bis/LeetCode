class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> count(26);
        vector<int> count2(26);
        if (word1.length() != word2.length()) {
            return false;
        } else {
            int i = 0;
            while (i < word1.length()) {
                int idx = word1[i] - 'a';
                count[idx]++;
                i++;
            }
            
            int j = 0;
            while (j < word2.length()) {
                int idx = word2[j] - 'a';
                count2[idx]++;
                j++;
            }
             for (int idx = 0; idx < 26; idx++) {
                if ((count[idx] > 0) != (count2[idx] > 0)) {
                    return false;
                }
            }
            sort(count.begin(),count.end());
            sort(count2.begin(),count2.end());
            if(count == count2){
                return true;
            }
            
        }
        return false;
    }
};