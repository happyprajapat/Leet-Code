class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int area=0,curr;
        while(i < j)
        {
            curr = min(height[i],height[j]) * (j-i);
            area = max(curr, area);
            if(height[i] > height[j]) j--;
            else i++;
        }
        
        return area;
    }
};