class Solution {
public:

    void printSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets) {
        if (i == nums.size()) {
            //store subsets
            allSubsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        printSubsets(nums, ans, i+1, allSubsets);

        //exclude
        ans.pop_back();
        printSubsets(nums, ans, i+1, allSubsets);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        printSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }

};