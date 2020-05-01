class Solution {
public:
    string longestPalindrome(string s) {
        int stringLength = s.size();

        if (stringLength < 2){
           return s;
        }

        int start = 0;
        int length = 1;
        int i = 0; 
        while (i < stringLength) {
            if (stringLength - i <= length / 2){
                break;
            } 
            int j = i, k = i;
            while (k < stringLength-1 && s[k+1] == s[k]){
              ++k;
            } 
            i = k+1;
            while (k < stringLength-1 && j > 0 && s[k + 1] == s[j - 1]) {
             ++k; 
             --j; 
           }
            int newLength = k - j + 1;
            if (newLength > length){
             start = j;
             length = newLength; 
           }
        }
        return s.substr(start, length);
    }
};