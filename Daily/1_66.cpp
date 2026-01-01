class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 1;
        for(int i = size - 1; i >= 0; i--){
            int temp = digits[i] + carry;
            digits[i] = temp % 10;
            if(temp == 10) carry = 1;
            else carry = 0;
        }
        if(carry) digits.insert(digits.begin(), 1);
        return digits;

        
    }
};
