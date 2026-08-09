class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n>0){
            int num = n;
            if(num & 1){
                num= num>>1;
                if(num & 1){return false;}
            }
            else{
                num= num>>1;
                if(!(num & 1)){return false;}
            }
            n=n>>1;
            cout<< n<<" ";
        }
        return true;
    }
};