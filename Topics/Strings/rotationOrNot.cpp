/*Given two strings, find whether both are rotations of each other or not. For example,
Given str1 = abacd and str2 = acdab, we can get str1 by rotating str2 and,
Given str1 = coder and str2 = cored, we can not get str1 by rotating str2.

Input Format

The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two strings str1 and str2. 
Output Format

For each test case, print YES or NO in new lines.

Sample Input

2
abacd
acdab
coder
cored

Sample Output

YES
NO  */

#include<iostream>

using namespace std;

int isRotation(string str1, string str2)
{
	for(int i=1;i<str2.length();i++)
    {
      int j=0;
      char temp=str2[j];
      for(j=0;j<str2.length()-1;j++)
      		str2[j]=str2[j+1];
      str2[j]=temp;
      if(str2==str1)
        return 1;
    }
  return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int ans=isRotation(str1,str2);
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}