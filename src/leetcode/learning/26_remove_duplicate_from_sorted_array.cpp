class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre = 0, i = 1;
        while(i<nums.size()){
            if(nums[i]!=nums[pre]){
                pre++;
                nums[pre] = nums[i];
            }
            i++;
        }
    return pre + 1;
    }
};