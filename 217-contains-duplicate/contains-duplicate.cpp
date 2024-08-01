class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> intSet;

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (intSet.find(*it) != intSet.end()) {
            return true;
        }
        intSet.insert(*it);
    }
    return false;
    }
};