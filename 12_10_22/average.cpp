void average(int arr[]){
  int sum = 0;
  int n = sizeof(arr)/sizeof(arr[0]);
  
  for(int i =0;i<n;i++){
    sum+=arr[i];
  }
  
  int key = sum/n;
  
  for(int i =0;i<n;i++){
    if(arr[i]>key){
      cout<<arr[i];
    }
  }
}

Time complexity : O(n+n);
Space Complexity : O(1);
