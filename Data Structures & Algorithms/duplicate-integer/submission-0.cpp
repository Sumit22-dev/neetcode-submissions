class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
        }
        if(cnt>0){
            return true;
        }
        return false;
        
    }
};