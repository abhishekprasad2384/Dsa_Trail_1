//Brute Force

Void seperate(int arr[]){
int count =0;
int n = sizeof(arr)/sizeof(arr[0]);
  for(int i =0 ;i<n;i++){
  if(arr[i]==0)
    count++;
  }
  for(int i =0;i<n;i++){
  if(i<count)
    arr[i]=0;
    else
      arr[i]=1;
  }
}

T.C = O(n+n);
S.C = O(1);


//Optimise sol

void sepearte (int arr[]){
int n = sizeof(arr)/sizeof(arr[0]);
int start = 0;
  int end = n-1;
  
  while(start<end){
  if(arr[start]==1 && arr[end]==0)
    swap(arr[start],arr[end]);
    else if(arr[start]==0){
    start++;
    }else
      end--;
  }
}

T.C =O(N/2);
S.C=O(1);










