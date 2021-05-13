#include <iostream>
#include <vector>
#include "Solutions/Find_Numbers_with_Even_Number_of_Digits.h"
using namespace std;

int main() {

    vector<int> nums = {
            555,901,482,1771
    };

    Solution().isEven(1);
    std::cout <<
        Solution().findNumbers(nums)
    << std::endl;
    return 0;
}
