#include<iostream>
#include<algorithm>

using namespace std;

int isAnagram(string str1, string str2)
{
	if(str1.length()!=str2.length())
      return 0;

  	sort(str1.begin(), str1.end()); 
	sort(str2.begin(), str2.end()); 
  
  if(str1==str2)
  	return 1;
  else
    return 0;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int ans =isAnagram(str1,str2);
    if(ans)
     cout<<"Strings are Anagram";
    else
    {
        cout<<"Strings are not Anagram";
    }
    
    return 0;
}