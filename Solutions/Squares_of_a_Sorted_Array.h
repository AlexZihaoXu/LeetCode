
// https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;

        if (nums.size() == 1) {
            return {nums[0]*nums[0]};
        }

        int lowestIndex = 0;
        // Find the lowest index
        for (int i=0; i<nums.size(); i++)
            if (abs(nums[i]) < abs(nums[lowestIndex]))
                lowestIndex = i;

        int left = lowestIndex-1;
        int right = lowestIndex+1;
        result.push_back(nums[lowestIndex] * nums[lowestIndex]);
        while (left>=0 || right < nums.size()) {
            if (left < 0) {
                result.push_back(nums[right] * nums[right]);
                ++right;
                continue;
            } else if (right >= nums.size()) {
                result.push_back(nums[left] * nums[left]);
                --left;
                continue;
            } else if (abs(nums[left]) < abs(nums[right])) {
                result.push_back(nums[left] * nums[left]);
                --left;
            } else {
                result.push_back(nums[right] * nums[right]);
                ++right;
            }
        }
        return result;
    }
};