int expand(const string& s, int left, int right){
    while(left>=0 && right<s.length() && s[left]== s[right]){
        left--;
        right++;
    }
    return right-left -1;
}

class Solution {
public:
    string longestPalindrome(string s) {
     if(s.empty()){
        return "";
     }
     int start=0, maxlength=0;
     for(int i=0; i<s.length(); i++){
        int length1=expand(s, i, i);
        int length2=expand(s,i, i+1);
        int length= max(length1, length2);
        if(length >maxlength){
            maxlength= length;
            start =i -(length-1)/2;
        }
     }
     return s.substr(start, maxlength);
    }
};
