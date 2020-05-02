class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size()<3){
            return res;
        }
        sort(nums.begin(), nums.end() );
        
        for (int i = 0; i < nums.size()-2; i++) {
                if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
                    int j = i+1;
                    int k = nums.size()-1;
                    int sum = 0 - nums[i];
                    while (j < k) {
                        if (nums[j] + nums[k] == sum) {
                            vector<int> v{nums[i], nums[j], nums[k]};
                            res.push_back(v);
                            while (j < k){
                                if(nums[j] == nums[j+1]){
                                    j++;
                                }else{
                                    break;
                                }
                            } 

                            while (j < k ){
                                if(nums[k] == nums[k-1]){
                                    k--;
                                }else{
                                    break;
                                }
                            }
                            j++; k--;
                        } else if (nums[j] + nums[k] < sum){
                            j++;
                        } 
                        else {
                             k--;
                        }
                   }
                }
        }
        return res;
        
    }
};