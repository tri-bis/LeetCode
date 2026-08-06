class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n + 10;
        while (n < num){
            int product = 1;
            int val = n;
        while (val != 0) {
            int digit = val % 10;
            product = product * digit;
            val = val / 10;
        }
        //cout << product;
        if (product % t == 0) {
            return n ;
        }
        else{n++;}
        }
        return n;
    }
};