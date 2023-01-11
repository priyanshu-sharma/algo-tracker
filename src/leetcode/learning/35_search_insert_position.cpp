class Solution {
public:
    int binary_search(vector<int> nums, int l, int r, int target, int mid){
        if(l<=r){
            mid = l + (r - l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid] > target){
                return binary_search(nums, 0, mid-1, target, mid);
            }
            else{
                return binary_search(nums, mid+1, r, target, mid);
            }
        }
        if(mid==0 && l==0 && r==-1){
            return mid;
        }
        return mid + 1;
    }
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() > 0){
            int mid = (nums.size() - 1)/2;
            return binary_search(nums, 0, nums.size()-1, target, mid);
        }
        return 0;
    }
};