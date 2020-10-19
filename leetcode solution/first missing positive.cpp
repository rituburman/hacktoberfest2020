class Solution {
public:
    int firstMissingPositive(vector<int> &nums) {
        int length=nums.size();
        int i=0;
        
        for(;i<length;)
        {
            while(nums[i]>=1&&nums[i]<=length&&nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }   
            i++;
        }
        for(i=0;i<length;i++)
        {
            if(i+1!=nums[i])
                return i+1;
        }
        return length+1;
        
    }
};
