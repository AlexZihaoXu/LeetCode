
// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/

#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int count = 0, maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = maxCount > count ? maxCount : count;
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};