#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {1,2,5,9,9,1,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    int maxi = INT_MIN;
    for(int i =n-1;i>=0;i--){
        maxi=max(arr[i],maxi);
        arr[i]=maxi;
    }
    
    for(int it : arr){
        cout<<it<<endl;
    }
    return 0;
}

Time Complexity : O(n);
Space Complexity : O(1);
