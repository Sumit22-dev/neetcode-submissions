class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<n;i++){
        int s_i = i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[s_i]){
                s_i=j;
            }
            
        }
        std::swap(nums[i],nums[s_i]);
       }
       return nums;
        
    }
};