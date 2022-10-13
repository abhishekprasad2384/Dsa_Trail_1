#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {1,2,3,4,5,6,7,8};
    
   
    sort(arr.begin(),arr.end());
    
    cout<<arr[arr.size()-3];
   
   
   
    return 0;
}

Time Complexity : O(log n);
Space Complexity : O(1);
