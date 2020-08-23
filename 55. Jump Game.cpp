// Approach 4:Greedy 26.78% / 83.30%
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int max_reach_index = 0;
        int i = 0;
        while(i <= max_reach_index){
            
            if(i + nums[i] > max_reach_index) max_reach_index = i + nums[i];
            if(max_reach_index >= nums.size()-1) return true;
            ++i;
        }
        
        return false;
        
    }
};