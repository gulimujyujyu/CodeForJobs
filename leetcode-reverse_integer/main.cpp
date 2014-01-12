#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int dig = 0;
        int si = x > 0? 1 : -1;
        x = x * si;
        int num = 0;
        while (x) {
            dig = x % 10;
            num = num * 10 + dig;
            x = x / 10;
        }
        return num * si;
    }
};

int main()
{
    Solution sol;
    cout << sol.reverse(-123) << endl;
    cout << -1 % 10 << endl;
    return 0;
}