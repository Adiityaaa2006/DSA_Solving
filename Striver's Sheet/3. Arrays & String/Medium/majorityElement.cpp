#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> h1;
        int n = nums.size();

        for (int i=0; i<n; i++) {
            h1[nums[i]]++;
        }

        int maxCount = 0, maxEle = 0;

        for (auto it : h1) {
            int element = it.first;
            int count = it.second;

            if(count > maxCount) {
                maxCount = count;
                maxEle = element;
            }
        }
        return maxEle;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};

    Solution S;
    int result = S.majorityElement(nums);
    cout << "Most Occured Element: " << result << endl;

    return 0;
}