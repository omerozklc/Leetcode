class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num % 3 != 0) return {};
        long long middle = num / 3; 
        return vector<long long> {middle-1, middle, middle + 1};
    }
};
