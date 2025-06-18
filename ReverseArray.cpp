void reverseArray (vector<int> &arr, int m){
  int len = arr.size();
  int a = m+1;
  int b = len-1;
  while (a<b){
    int p = arr[a]; 
    arr[a] = arr[b]; 
    arr[b] = p;
    a++;
    b--;
  }
}
