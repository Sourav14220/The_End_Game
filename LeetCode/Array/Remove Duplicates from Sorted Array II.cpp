//TC : O(N)
//MC : O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int k = 0;
     int cnt = 0;
     for(int i = 0 ; i < nums.size( ); i++) {
      cnt++;
      if(i == nums.size( ) - 1 or nums[i] != nums[i + 1]) {
        if(cnt < 2) {
          swap(nums[i], nums[k++]);
        }
        else {
          swap(nums[i], nums[k++]);
          swap(nums[i - 1], nums[k++]);
        }
        cnt = 0;
      }
    }
    return k;
  }
};
