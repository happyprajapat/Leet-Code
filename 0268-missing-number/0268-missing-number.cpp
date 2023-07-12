class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n =nums.size()+1;
        int sum=(n*(n-1))/2;
        
        int sumOfArray=0;
        for(int i=0;i<nums.size();i++)
        {
            sumOfArray+=nums[i];
        }
        
        return (sum - sumOfArray);
        
    }
};