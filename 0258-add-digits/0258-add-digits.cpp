class Solution {
    int oneDigit(int val,int count){
         
        if (count == 1 || val == 0){return 0;}
        int sum = 0;
         count = 0;
        while(val != 0){
           
            int digit = val % 10;
            sum = sum + digit;
            count++;
            val = val / 10;
        }
        val = sum;
        if (count != 1 ){return oneDigit(val,count);}
        
        return sum;
    }
public:
    int addDigits(int n) {
        int val = n;
        int count = 0;
        int res =  oneDigit(val,count);
        return res;
    }
};