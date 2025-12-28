class Solution {
public:
    int maxFreqSum(string s) {
        unordered_set<int> vowels{0,4,8,14,20};
        int alphabet[26];
        for(int i = 0; i < s.size();i++)    alphabet[s[i] - 'a']++;
        int v = 0, c = 0;
        for(int i = 0; i < 26; i++){
            if(vowels.contains(i)) v = max(v, alphabet[i]);
            else c = max(c, alphabet[i]);
        }
        return c + v;
        

    }
};
