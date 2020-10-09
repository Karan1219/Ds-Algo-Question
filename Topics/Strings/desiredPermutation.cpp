/*You need to write a function to find the desired permutations of a given string. Desired means, all permutation but with restrictions for one character at specific position.

Note: If the character given is not present in the string, then print all permutations of given string.

Input Format

First lines contains a string to be permuted
Second line contains a character for condition
Third line contains the position from left (starting from index 0) to be restricted.
Output Format

Print the desired permutations of given string in lexicographical order

Sample Input

ABC
B
1

Sample Output

ACB
BAC
BCA
CAB

Explanation

Total 6 permutations will be there: ABC, ACB, BAC, BCA, CAB, CBA
Out of these two permutations have character B at index 1 i.e. ABC & CBA so these needs to be excluded.*/

#include<iostream>

using namespace std;

void desiredPerm(string str,string ans, char ch, int pos, int length)
{
    if(str.length()==0)
    {
        if(ans.length()==length && ans[pos]!=ch)
            cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++)
    {
        char ch1=str[i];
        string roq1= str.substr(0,i);
        string roq2= str.substr(i+1,str.length());
        desiredPerm(roq1+roq2,ans+ch1,ch,pos,length);
    }
}
int main()
{
    string s;
    cin>>s;
    char ch;
    cin >>ch;
    int pos;
    cin>>pos;
    desiredPerm(s,"",ch,pos,s.length());
    return 0;
}