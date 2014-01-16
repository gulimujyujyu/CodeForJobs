#include <iostream>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;

        int tn = 0;
        for (int i = 1; i <= n; i++) {
            int left = i - 1;
            int right = n - i;
            tn += numTrees(left) * numTrees(right);
        }
        return tn;
    }
};

int main()
{
    Solution sol;
    cout << sol.numTrees(3);
    return 0;
}