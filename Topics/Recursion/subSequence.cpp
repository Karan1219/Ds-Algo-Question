#include<iostream>
#include<string>

using namespace std;

void subSequence(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    subSequence(str.substr(1,str.length()),ans+ch);
    subSequence(str.substr(1,str.length()),ans);
}
int main()
{
    subSequence("abc","");
    return 0;
}