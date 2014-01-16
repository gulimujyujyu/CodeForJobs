#include <iostream>
using namespace std;

/*
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int pos = 0, i = 0;
        bool found = false;
        for (i = 0; i < n; i++) {
            if (A[i] >= target) {
                pos = i;
                found = true;
                break;
            } 
        }
        if (i == n && !found) pos = i;
        return pos;
    }
};
*/

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        //binary search
        int i = 0, j = n, pos = 0, mid = 0;
        while (i != j) {
            mid = (i+j) / 2;
            if (target > A[mid]) i = mid + 1;
            else if (target < A[mid]) j = mid;
            else break;
        }
        mid = (i+j) / 2;

        return pos;
    }
};

int main()
{
    int a[] = {1, 2, 4};
    Solution sol;
    cout << sol.searchInsert(a, 3, 3) << endl;
    return 0;
}