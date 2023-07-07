//TC : O(N)
//MC : O(N)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     unordered_set <int> mst1(nums1.begin( ), nums1.end( )), mst2(nums2.begin( ), nums2.end( ));
     vector <int> intersect;
     for(auto it = mst1.begin( ) ; it != mst1.end( ); it++) {
      int key = *it;
      if(mst2.find( key ) != mst2.end( )) {
        intersect.push_back( key );
        mst2.erase( key );
      }
     }
     return intersect;
    }
};
