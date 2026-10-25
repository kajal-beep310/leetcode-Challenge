class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        sort(num1.begin(), num1.end());
         sort(num2.begin(), num2.end());
         int i=0 , j=0;
         vector<int> result;
         while(i<num1.size() && j< num2.size()){
            if(num1[i]<num2[j]){
                i++;
            }else if(num1[i]>num2[j]){
                j++;
            }else{
                if(result.empty() || result.back()!=num1[i]){
                    result.push_back(num1[i]);
                }
                i++;
                j++;
            }
         }
         return result;
    }
};