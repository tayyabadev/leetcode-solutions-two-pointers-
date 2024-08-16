class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int count=0;
        unordered_map<int,int>map;
        for (int i=0;i<nums.size();i++){
            if (map.find(nums[i])!=map.end()){
                count+=map[nums[i]];
                map[nums[i]]+=1;
            }
            else{
                map[nums[i]]+=1;
            }
        } return count;
    }
};