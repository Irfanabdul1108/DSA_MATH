// platform - leetcode
//link - https://leetcode.com/problems/palindrome-number/
// concept - palindrome number
#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
   string name=to_string(x);
   int i,j;
   i=0;
   j=name.size()-1;
     while(i<=j)
  {
      if(name[i]!=name[j])
    return false;
    i++;
    j--;
  }
  return true;
    }
};