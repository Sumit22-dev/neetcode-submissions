class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int largest = i;
            for(int j=i+1;j<n;j++){

            if(nums[j]<nums[largest]){
                largest = j;
               
            }
            
            }
             swap(nums[i],nums[largest]);            
        }
        
        return nums;
    }
};