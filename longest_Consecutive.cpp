class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<long long int, int> mpp;
        int ans = 0;

        for (int num : nums) {
            if (mpp.find(num) == mpp.end()) {
                int left = mpp.count(num - 1) ? mpp[num - 1] : 0;
                int right = mpp.count(num + 1) ? mpp[num + 1] : 0;

                int length = left + right + 1;
                mpp[num] = length;
                ans = max(ans, length);

                mpp[num - left] = length;
                mpp[num + right] = length;
            }
        }
        return ans;
    }
};
