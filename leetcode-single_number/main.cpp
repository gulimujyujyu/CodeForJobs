#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int sn = 0;
        for (int ii = 0; ii < n; ii++) {
            sn = sn ^ A[ii];
        }
        return sn;
    }
};

int main()
{
    int a[] = {2, 1, 2};
    Solution sol;
    cout << sol.singleNumber(a, 3);
    return 0;
}