class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        int n = digits.size();

        cout << sum;
        int i = n - 1;
        int carry = 0;
        while (i >= 0) {
            if (digits[i] != 9) {
                digits[i] = digits[i] + 1;
                return digits;
            }
            digits[i] = 0;

            i--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};