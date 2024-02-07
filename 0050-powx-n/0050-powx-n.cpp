class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        } else if (n > 0) {
            double half_pow = myPow(x, n / 2);
            return n % 2 == 0 ? half_pow * half_pow : x * half_pow * half_pow;
        } else {
            // If n is negative, divide by x and invert the sign of n
           return 1.0 / (x * myPow(x, -(long long)n - 1));
        }
    }
};
