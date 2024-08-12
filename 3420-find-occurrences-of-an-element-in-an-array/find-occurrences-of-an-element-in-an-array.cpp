class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,
                                     int x) {
        vector<int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                indices.push_back(i);
            }
        }
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            if (queries[i] <= indices.size()) {
                result.push_back(indices[queries[i] - 1]);
            } else {
                result.push_back(-1);
            }
        }
        return result;
    }
};