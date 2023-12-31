//TC: O(N + M)
//MC : O(N)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector <int> intersects;
    unordered_map <int, int> mp;
    for(int i = 0 ; i < nums1.size( ) ; i++) {
     mp[nums1[i]]++;
    }
     for(int i = 0 ; i < nums2.size( ) ; i++) {
       if(mp.find(nums2[i]) != mp.end( ) and mp[nums2[i]] > 0) {
         intersects.push_back( nums2[i] );
         mp[nums2[i]]--;
       }
     }
     return intersects;
    }
};
