#include<unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_set <int> s ;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        if(s.size() == nums.size())
        {
            return false;
        }
        else
            return true;
    }
};