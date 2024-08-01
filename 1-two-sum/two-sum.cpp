class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> intMap;

        for(int i = 0; i < nums.size(); ++i){
            int subTarget = target - nums[i];
            if(intMap.count(subTarget)){
                return {intMap[subTarget], i};
            }
            intMap[nums[i]] = i;
        }
        return {};
    }
};