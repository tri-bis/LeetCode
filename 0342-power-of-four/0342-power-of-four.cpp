class Solution {
public:
    bool isPowerOfFour(int n) {
        int num = n;
        if (n < 1) {
            return false;
        }
        int x = 0;
        
        while (n > 1) {
            n = n >> 1;
            x++;
        }
        int val = 1;
        if(x % 2 == 0){
        for (int i = 0; i < x; i++) {
            val = val * 2;
        }
        }
        if (num == val) {
            return true;
        
        }
        return false;
    }
};