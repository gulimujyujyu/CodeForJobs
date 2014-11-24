#include "Windows.h"

int main()
{
    while(true) {

        for (int ii = 0; ii < 96000000; ++ii) 
            ;   

        sleep(10);
    }

    return 0;
}