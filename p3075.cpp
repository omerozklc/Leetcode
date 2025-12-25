// Omer Ozkilic 12/25/2025
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long result = 0;
        int index = happiness.size() - 1, turn = 0;
        while(k > turn){
            int temp = happiness[index--] - turn++; 
            if(temp < 0) temp = 0;
            result += temp; 
        }
        return result;
    }
};
