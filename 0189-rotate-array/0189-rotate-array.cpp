class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numsame[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            numsame[i]=nums[i];
        }
        k = k % nums.size();
        for(int i=0; i < k;i++)
        {
            nums[i] = numsame[nums.size() - k + i];
        }
        for(int i=k;i<nums.size() ;i++)
        {
            nums[i] = numsame[i-k];
        }
    }
};