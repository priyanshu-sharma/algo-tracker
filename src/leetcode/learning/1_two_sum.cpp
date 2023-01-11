class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, size;
        std::vector<int> result;
        size = nums.size();
        for(i=0;i<size-1;i++){
            for(j=i+1;j<size;j++){
                if(nums[i] + nums[j] == target){
                    result.emplace_back(i);
                    result.emplace_back(j);
                }
            }
        }
        return result;
    }
};
