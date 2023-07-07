//TC: O(N)
//MC: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int k = 0;
     for(int i = 0 ; i < nums.size( ); i++) {
      if(i == nums.size( ) - 1 or nums[i] != nums[i + 1]) {
        swap(nums[i], nums[k]);
        k++;
      }
    }
    return k;
  }
};
