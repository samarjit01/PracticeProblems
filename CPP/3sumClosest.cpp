class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int answer = 0;
        if(nums.size() < 3){
            return answer;
        }
        answer = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size()-2 ; ++i) {
                while(i > 0 && i< (nums.size()-2)){
                    if(nums[i] == nums[i-1]){
                        i++;
                    }else{
                        break;
                    }
                }

            
                int j = i+1;
                int k = nums.size()-1; 

                while(j < k) {
                    int sum = (nums[i]+nums[j]+nums[k]);
                    if(sum == target){
                        return sum;
                    }
                    if( abs(target-sum) < abs(target-answer) ) {
                        answer = sum;
                    }
                    if(sum > target) {
                        --k;
                    } else {
                        ++j;
                }
            }
        }
        return answer;
        
    }
};