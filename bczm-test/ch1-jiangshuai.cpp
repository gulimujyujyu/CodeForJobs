#include <iostream>
using namespace std;

bool IsValid( int ia, int ja, int ib, int jb);

int main() 
{
    for (int ia = 8; ia <= 10; ++ia) {
        for (int ja = 4; ja <= 6; ++ja) {

            for (int ib = 1; ib <= 3; ++ib) {
                for (int jb = 4; jb <= 6; ++jb) {

                    if (IsValid(ia, ja, ib, jb)) {
                        cout << "(" << ia << ", " << ja << ") and (" 
                            << ib << "," << jb << ")" << endl;
                    }
                }
            }
        }
    }
}

bool IsValid( int ia, int ja, int ib, int jb) 
{
    if (ja == jb)
        return false;
    return true;
}
