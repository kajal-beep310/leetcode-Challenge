/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int findBound(int* nums, int numsSize, int target, int isFirst) {
    int low = 0, high = numsSize - 1;
    int bound = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            bound = mid;
            if (isFirst) {
                high = mid - 1; 
            } else {
                low = mid + 1;  
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return bound;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    result[0] = findBound(nums, numsSize, target, 1);
    result[1] = findBound(nums, numsSize, target, 0);
    
    return result;
}
