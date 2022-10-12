

void secondLargest(int arr[]){

  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i =1;i<n;i++){
    int index = i;
    if(arr[i]>arr[index]{
      int j =i-1;
      int temp = arr[index];
      while(j>=0 && arr[j-1]>arr[index]){
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=temp;
    }
  }
       
       cout<<arr[n-1];
}
       
 T.C = O(n+n);
 S.C = O(1);
