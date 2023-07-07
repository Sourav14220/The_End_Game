//TC : O(N)
//MC : 0(N)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int l = 0;
     for(int i = 0 ; i < nums.size( ) ; i++) {
      if(nums[i] < 0) l = i;///l = 1
     }
     int len = nums.size( ) - 1;
     int r = l + 1;
     int left = 0;
     int right = len;
     vector <int> nums1( nums.size( ) );
     while(left <= l and right >= r) {
      if((nums[left] * nums[left]) <= (nums[right] * nums[right])) {
        nums1[len] = nums[right] * nums[right];
        right--;
        len--;
      }
      else {
        nums1[len] = nums[left] * nums[left];
        left++;
        len--;
      }
     }
     if(left <= l) {
      while(left <= l) {
        nums1[len] = nums[left] * nums[left];
        left++;
        len--;
      }
     }
     else{
        while(right >= r) {
         nums1[len] = nums[right] * nums[right];
         right--;
         len--; 
        }
      }
     return nums1;
    }
};
