
class Solution {
public:
    int mySqrt(int x) {

        if (x == 0)
            return 0;

        if (x == 1 || x == 2 || x == 3)
            return 1;

        long long a = 0;
        int b = 0;
        int i = 1;

        while (a <= x) {
            a = 1LL * i * i;

            if (a <= x) {
                b = i;
            }

            i++;
        }

        return b;
    }
};
