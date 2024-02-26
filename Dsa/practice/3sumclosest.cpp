class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int res = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {
            int l = i + 1;
            int r = nums.size() - 1;

            int left_sum = nums[i] + nums[l] + nums[l + 1];
            if ((left_sum >= target) && (left_sum - target < abs(target - res))) {
                res = left_sum;
                continue;
            }

            int right_sum = nums[i] + nums[r - 1] + nums[r];
            if ((right_sum <= target) && (target - right_sum < abs(target - res))) {
                res = right_sum;
                continue;
            }

            while (l < r) {
                int tmp = nums[i] + nums[l] + nums[r];
                if (abs(target - tmp) < abs(target - res)) {
                    res = tmp;
                }
                if (tmp > target) {
                    r--;
                } else if (tmp < target) {
                    l++;
                } else {
                    break;
                }
            }
        }
        return res;
    }
};