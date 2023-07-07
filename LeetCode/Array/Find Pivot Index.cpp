//TC : O(N)
//MC : O(1)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      for(int i = 1 ; i < nums.size( ) ; i++)  {
        nums[i] += nums[i - 1];
      }
      if(nums[nums.size( ) - 1] == nums[0]) return 0;
      int idx = -1;
      for(int i = 1 ; i < nums.size( ) ; i++) {
        if(nums[i - 1] == nums[nums.size( ) - 1] - nums[i]) {
          idx = i;
          break;
        }
      }
      return idx;
    }
};
