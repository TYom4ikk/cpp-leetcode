class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        int vectSize = nums.size();
        for(int i =0;i<vectSize;i++){
            for(int j =0;j<vectSize;j++){
                if(i==j){
                    continue;
                }
                if((nums[i]+nums[j])==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};