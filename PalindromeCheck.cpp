#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    string cleaned;
    int len = s.size();
    for (int i=0; i<len; i++){
        if (s[i]>='A'&&s[i]<='Z'){
            cleaned.push_back(s[i]+32);
        }
        else if (s[i]>='a'&&s[i]<='z'){
            cleaned.push_back(s[i]);
        }
        if (s[i]>='0'&&s[i]<='9'){
            cleaned.push_back(s[i]);
        }
    }
    len = cleaned.size();
    int a = 0;
    int b = len-1;
    while (a<b){
        if(cleaned[a]!=cleaned[b]){
            return false;
        }else{
            a++;
            b--;
        }
    }
    return true;
}
