#include <iostream>
#include <vector>
#include "Solutions/Max_Consecutive_Ones.h"
using namespace std;

int main() {

    vector<int> nums = {
            1,1,0,1,1,1
    };

    std::cout <<
        Solution().findMaxConsecutiveOnes(nums)
    << std::endl;
    return 0;
}
