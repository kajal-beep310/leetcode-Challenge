class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int low=0;
       int high= nums.size()-1;

       while(low<high){
        int csum= nums[low] +nums[high];
        if(csum== target){
            return{low+1, high+1};
        }
        else if(csum>target){
          high--;
        }else{
            low++;
        }
       }
        return {};
    }
};