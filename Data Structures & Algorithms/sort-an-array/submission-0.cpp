class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int m= nums[i];
            int idx=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<m){
                    idx=j;
                    m=nums[j];
                }
            }
            swap(nums[i],nums[idx]);
        }
        return nums;
    }
};