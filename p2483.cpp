class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> penalties;
        for(int i = 0; i < customers.size() + 1;i++){
            int temp = 0;
            for(int j = 0; j < i; j++)  if(customers[j] == 'N') temp++;
            for(int j = i; j < customers.size(); j++)   if(customers[j] == 'Y') temp++;
            penalties.push_back(temp);
        }
        int temp = INT_MAX;
        int result = INT_MAX;
        for(int i = 0; i < penalties.size(); i++){
            if(temp > penalties[i]){
                temp = penalties[i];
                result = i;
            }
            if(temp == penalties[i]){
                result = min(result,i);
            }
        }
        return result;
    }
};
