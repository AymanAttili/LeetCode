class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
    int suffix = 1, temp = 1, prefix = 1, nextVal;
    int l = nums.size();
    vector<int> ans(l);
    for (int i = nums.size() - 1; i >= 0; i--) {
        suffix *= temp;
        temp = nums[i];
        ans[i] = suffix;
    }

    for (int i = 0; i < nums.size(); i++) {
        ans[i] *= prefix;
        prefix *= nums[i];
    }


    return ans;
}
};