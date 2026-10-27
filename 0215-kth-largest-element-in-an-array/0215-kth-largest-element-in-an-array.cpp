class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max=nums[0];
        int n=nums.size();
        int i;
        sort(nums.begin(), nums.end());
       return nums[nums.size()-k];
    }
};