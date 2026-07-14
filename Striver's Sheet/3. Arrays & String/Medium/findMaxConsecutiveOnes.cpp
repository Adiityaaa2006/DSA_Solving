#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0;

        for (int i=0; i<n; i++) {
            if (nums[i] == 1) {
                count++;
            } 
            else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        return max(maxCount, count);
    }
};

int main() {
    vector<int> nums = {1, 0, 1, 1, 0, 1};

    Solution S;
    int result = S.findMaxConsecutiveOnes(nums);
    cout << "Max Consecutive Ones: " << result << endl;

    return 0;
}