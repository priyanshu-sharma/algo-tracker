class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, pre = 0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[pre] = nums[i];
                pre++;
            }
            i++;
        }
    return pre;
    }
};