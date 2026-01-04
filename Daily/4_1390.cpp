class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        unordered_map<int, int> map;
        int result = 0, temp, count, number;
        for(int i : nums) map[i]++;
        for (auto i = map.begin(); i != map.end(); i++){
            number = i->first;
            count = 2;
            temp = 1 + number;
            for(int i = 2; i <= number / 2; i++){
                if(number % i == 0){
                    count++;
                    temp += i;
                }
                if(count == 5){
                    break;
                }
            }
            if(count == 4){
                result += temp * i->second;
            }
        }
        return result;
    } 
};
