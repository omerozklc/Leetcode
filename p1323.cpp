class Solution {
public:
    int maximum69Number (int num) {
        string result = to_string(num);
        for(auto& c : result) {
            if(c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(result);
    }
};
