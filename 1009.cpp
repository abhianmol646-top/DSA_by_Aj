class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n == 0)
        {
            return 1;
        }

        int ans = 0;
        int mul = 1;

        while(n > 0)
        {
            int rem = n % 2;

            if(rem == 0)
            {
                ans += 1 * mul;
            }

            n = n / 2;
            mul = mul * 2;
        }

        return ans;
    }
};