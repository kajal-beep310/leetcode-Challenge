class Solution {
public:
    int findNthDigit(int n) {
        long long len=1;
        long long count=9;
        long long start=1;
        while( n>len*count){
            n=n - len*count;
            len++;
            count *= 10;
            start *=10;
        }
        long long target= start +(n-1)/len;
         string s=to_string(target);
         int digit_index=(n-1)%len;

         return s[digit_index] -'0';
    }
};