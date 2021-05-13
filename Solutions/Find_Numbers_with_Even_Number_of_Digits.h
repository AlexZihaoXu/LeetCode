
// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/

#include <vector>

using namespace std;

class Solution {
public:
    bool isEven(const int &num) {
        int count = 1;
        int _num = num;
        while (_num /= 10) count++;
        return count % 2 == 0;
    }

    int findNumbers(vector<int> &nums) {
        int count = 0;
        for (const auto &num : nums) {
            if (isEven(num)) {
                count++;
            }
        }
        return count;
    }
};