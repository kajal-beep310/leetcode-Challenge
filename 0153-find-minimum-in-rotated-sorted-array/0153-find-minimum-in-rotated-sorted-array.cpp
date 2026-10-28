class Solution {
public:
    int findMin(vector<int>& nums) {
        int high=nums.size()-1;
        // int low=0;
        // int min =nums[0];
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(nums[mid]>nums[high]){
        //         low=mid+1;
        //     }else{
        //         high=mid-1;
        //     }
        // }
        // return nums[low];   
        sort(nums.begin(), nums.end());
        return nums[0];

    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           