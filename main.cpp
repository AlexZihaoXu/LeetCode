#include <iostream>
#include <vector>
#include "utils.h"
#include "Solutions/Squares_of_a_Sorted_Array.h"
using namespace std;

int main() {

    vector<int> nums = {
            -5, -3, -2, -1
    };
    printVector<int>(Solution().sortedSquares(nums));

    return 0;
}
