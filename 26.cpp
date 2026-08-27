class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int k = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            bool duplicate = false;

            for(int j = 0; j < i; j++)
            {
                if(nums[i] == nums[j])
                {
                    duplicate = true;
                    break;
                }
            }

            if(duplicate==false)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};