class Solution
{
public:
    int smallestIndex(vector<int> &nums)
    {
        int n, r;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            int sum = 0;
            if (nums[i] < 10)
            {
                if (nums[i] == i)
                {
                    return i;
                    break;
                }
            }
            else
            {
                while (n != 0)
                {
                    r = n % 10;
                    sum = sum + r;
                    n = n / 10;
                }
                if (sum == i)
                {
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};