//Sourav Halder
//TC: O(N * (logn + logm))
//MC : O(1)
class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
     vector <int> sortedArray;
     for(int i = 0 ; i < arr2.size( ) ; i++) {
      if(binary_search(arr1.begin( ), arr1.end( ), arr2[i]) and binary_search(arr3.begin( ), arr3.end( ), arr2[i])) {
       sortedArray.push_back( arr2[i] );
      }
     }
     return sortedArray;
    }
};
