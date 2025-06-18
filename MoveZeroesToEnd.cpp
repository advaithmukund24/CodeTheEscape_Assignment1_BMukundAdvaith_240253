void pushZeros AtEnd(vector<int> &arr)
{
  int len arr.size();
  int x=0;
  for (int i=0; i<len; i++){
    if (arr[i]==0){
      continue;
    }
    else{
      arr[x] = arr[i];
      x++;
    }
  }
  while (x< len) {
    arr[x] = 0;
    x++;
  }
}
