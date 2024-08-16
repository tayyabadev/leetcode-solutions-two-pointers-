class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int left = 0;
        int count = 0;
        for (int i = 0; i < arr1.size(); i++) {
            while (left < arr2.size() && abs(arr1[i] - arr2[left]) > d) {
                left++;
            }
            if (left == arr2.size()) {
                count++;
            }
            left=0;
        }
        return count;
    }
};