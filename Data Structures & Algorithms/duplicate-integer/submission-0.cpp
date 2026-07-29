class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        int n=nums.size();
        for(int x : nums){
            if(map.count(x)){
                return true;
            }
            map.insert(x);
        }
        return false;
    }
};