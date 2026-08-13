class Solution {
public:
    char findTheDifference(string s, string t) {
       sort(t.begin(),t.end());
       sort(s.begin(),s.end());

        char ans =' ';
        
        int i = 0;
      while(i<s.length() +1 ){
         char s1 = s[i];
         
        char s2 = t[i];
        if(s1 !=  s2){
            return s2;
        }
        
        i++;
        
       }
       
     return ans ;
    }
};