class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int left = 0;
        int right = nums.size() - k;
        vector<int> ans;
        while (right < n) {
            ans.push_back(nums[right]);
            right++;
        }
        while (left < nums.size() - k) {

            ans.push_back(nums[left]);
            left++;
        }
        nums=ans;
    }
};