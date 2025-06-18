string removeDuplicates (string str, int n)
{
  string strnew;
  for (int i=0; i<n; i++){ 
    int found = 0;
    for (int j=0; j<i; j++){ 
      if (str[i]==str[j]){ 
        found = 1;
        break;
      }
    }
    if (found ==0){
      strnew.push_back(str[i]);
    }
  }
  return strnew;
}
