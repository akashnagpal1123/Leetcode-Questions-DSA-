class Solution {
public:
   void solve(vector<int> nums , vector<int> output, int index, vector<vector<int>> & ans){
        
        //base case
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }
        
        
        //external
         solve(nums, output, index+1, ans);
        
        //internal 
        int temp = nums[index];
        output.push_back(temp);
        solve(nums, output, index+1, ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums, output, index, ans);
        return ans;
    }
};