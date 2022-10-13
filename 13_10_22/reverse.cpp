void reverse(int arr[]){
  int n = sizeof(arr)/sizeof(arr[0]);
  int start =0;
  int end =n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

Time Complexity : O(n);
Space Complexity : O(1);
