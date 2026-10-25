class Solution {
public:
    void solve(int i, vector<int>& candidates, int target,
               vector<int>& current,
               vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        if (i == candidates.size()) {
            return;
        }

        if (candidates[i] <= target) {
            current.push_back(candidates[i]);

            solve(i, candidates, target - candidates[i],
                  current, ans);

            current.pop_back();
        }

        solve(i + 1, candidates, target, current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {
        vector<vector<int>> ans;
        vector<int> current;

        solve(0, candidates, target, current, ans);

        return ans;
    }
};