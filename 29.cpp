
class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long count = 0;

        while(a >= b)
        {
            long long temp = b;
            long long mul = 1;

            while(a >= temp + temp)
            {
                temp = temp + temp;
                mul = mul + mul;
            }

            a = a - temp;
            count = count + mul;
        }

        if((dividend < 0 && divisor > 0) ||
           (dividend > 0 && divisor < 0))
        {
            return (int)-count;
        }

        return (int)count;
    }
};