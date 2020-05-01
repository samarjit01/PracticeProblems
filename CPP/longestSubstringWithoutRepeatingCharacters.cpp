class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int charLength = 256;
        int answer = 0 ;
        int start = -1 ;
        vector<int> startIndex(charLength,start);
        
        for (int i = 0; i != s.length(); i++) {
            char currChar = s[i];
            if (startIndex[currChar] > start){
                start = startIndex[currChar];
            }
            startIndex[currChar] = i;
            answer = max(answer, i - start);
        }
        return answer;
        
    }
};