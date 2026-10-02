class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        if(nums.size() == 2)
        {
            return (nums[0]-1) * (nums[1]-1);
        }

        int index = 0;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[index] < nums[i])
            {
                index = i;
            }
        }

        int index2 = 0;

        if(index2 == index)
        {
            index2 = 1;
        }

        for(int i = 1; i < nums.size(); i++)
        {
            if(i == index)
            {
                continue;
            }
            else if(nums[index2] < nums[i])
            {
                index2 = i;
            }
        }

        return (nums[index2]-1) * (nums[index]-1);
    }
};