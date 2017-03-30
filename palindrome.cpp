#include <iostream>
#include <string>

using namespace std;

class FauxPalindrome{
public:
  bool isPalindrome(string w);
  string classifyIt(string s);
  
};

bool FauxPalindrome::isPalindrome(string w)
{
  int i, j;
  j = w.size()-1;
  for(i = 0; i < j; i++, j--){
    if(w[i] != w[j]){
      return false;
    }
  }
  return true;
  
}

string FauxPalindrome::classifyIt(string s)
{
  if(s.size() == 0 || isPalindrome(s)){
    return "Palindrome";
  }
  else{
    int i;
    string t;
    t.push_back(s[0]);
    for(i = 1; i < s.size(); i++){
      if(s[i]!= s[i-1]){
	t.push_back(s[i]);
      }
    }
    if(isPalindrome(t)){
      return "Faux Palindrome";
    }    
  }
  return "Not Fven Faux Palindrome";
}

int main()
{
  string c;
  cin>>c;
  FauxPalindrome fp;
  cout<<fp.classifyIt(c)<<endl;  
  return 0;
}