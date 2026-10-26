class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()> nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }
        int m= nums1.size();
        int n= nums2.size();
        int low=0,high=m;

        while(low<=high){
            int part1=(low+high)/2;
            int part2=(m+n+1)/2-part1;


         int max1=(part1==0)?INT_MIN : nums1[part1 -1];
         int min1=(part1==m)?INT_MAX : nums1[part1];

         int max2=(part2==0)?INT_MIN : nums2[part2-1];
         int min2=(part2==n)?INT_MAX : nums2[part2];

         if(max1<=min2 &&max2<=min1){
            if((m+n)%2 ==1){
                return max(max1, max2);
            }
            return( max(max1 , max2) 
            + min(min1 , min2))/2.0;
         }
        else if(max1>min2){
            high=part1-1;
        }
        else{
            low=part1+1;
        }
        }
        return 0.0;
    }
};