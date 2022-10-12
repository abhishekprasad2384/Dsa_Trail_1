//Linear Search

void maxMin(int arr[]){
  int n = sizeof(arr)/sizeof(arr[0]);
  int maxi = INT_MIN;
  int mini = INT_MAX;
  
  for(int i =0;i<n;i++){
    maxi=max(maxi,arr[i]);
    mini = min(mini,arr[i]);
  }
  cout<<maxi<<' '<<mini;
}
  
