class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 2){
            return s;
        }
    	int length = s.size();
   		vector<vector<char> > idx(numRows);
   		int row = 0;
   		int step = 1;
   		for(int i=0;i<length;i++){

   			idx[row].push_back(s[i]);

   			row = row + step;
   			if(row == numRows ){
   				step = -1;
   				row = numRows-2;
   			}
   			if(row == -1 ){
   				step = 1;
   				row = 1;
   			}

   		}

   		string answer = "";
   		for(int i=0;i<numRows;i++){
   			for(int j=0;j<idx[i].size();j++){
   				answer+=idx[i][j];
   			}
   			
   		}
        return answer;
    }
};