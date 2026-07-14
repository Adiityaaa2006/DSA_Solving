#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i<n-1; i++) {
            if (nums[i] == 0) {
                int next = i + 1;
                // Find the next non-zero element
                while (next < n && nums[next] == 0) {
                    next++;
                }
                // If a non-zero element exists, swap it
                if (next < n) {
                    swap(nums[i], nums[next]);
                }
            }
        }
    }

    void moveZeroes2(vector<int>& nums) {
        int j = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0,1,0,3,12};

    Solution S;
    S.moveZeroes2(nums);
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

// 9860331114