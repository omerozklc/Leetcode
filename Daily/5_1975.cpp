class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long result = 0;
        int minval = INT_MAX, negatives = 0;

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                result += abs(matrix[i][j]);
                if(matrix[i][j] < 0) negatives++;
                minval = min(minval, abs(matrix[i][j]));
            }
        }

        if(negatives % 2 == 1){
            return result - 2 * (long long)minval;
        }
        return result;
    }
};
