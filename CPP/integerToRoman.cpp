class Solution {
public:
    string intToRoman(int num) {
        int numDenominations = 13;

        int denominations[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
        string romanSign[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

        string answer = "";

        for(int i=numDenominations-1;i>=0;i--) {
            while(num >= denominations[i]) {
                num -= denominations[i];
                answer += romanSign[i];
            }
        }
        return answer;
        
    }
};