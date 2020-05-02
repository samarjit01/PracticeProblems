class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size() == 0){
                return result;
        }
        vector<string> v = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        result.push_back("");
        for(int i = 0 ; i < digits.size(); ++i) {
            const string& candidate = v[digits[i]-'0'-2];
                vector<string> tmp;
                for(int j = 0 ; j < candidate.size() ; ++j) {
                    for(int k = 0 ; k < result.size() ; ++k) {
                        tmp.push_back(result[k] + candidate[j]);
                }
            }
            result = tmp;
        }
        return result;
    }
};