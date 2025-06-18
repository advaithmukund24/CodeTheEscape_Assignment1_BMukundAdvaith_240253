vector<string> helloWorld(int N) {
  vector<string> array;
  for (int i = 1; i <= N; i++){
    if (i % 15 == 0) {
      array.push_back("HelloWorld");
    } else if (i % 3 == 0) {  
      array.push_back("Hello");
    } else if (i % 5 == 0) {  
      array.push_back("World");
    } else {
      array.push_back(std::to_string(i));
    }
  }
  return array;
}
