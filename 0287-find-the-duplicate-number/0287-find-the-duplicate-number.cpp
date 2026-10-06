class Solution {
private:
    int duplicate(vector<int>& nums , int mid){
        int count=0;
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }
        return count;
        }
public:
    int findDuplicate(vector<int>& nums) {
        int low =1;
        int high=nums.size() - 1;
        while(low<high){
            int mid=(low+high)/2;
            int count= duplicate(nums , mid);
            if(count>mid){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};