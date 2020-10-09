#include<iostream>

using namespace std;
 
void permutation(string ques, string ans)
{
    if(ques.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i< ques.length(); i++)
    {
        char ch1 = ques[i];
        cout<<"ch1 "<<ch1<<endl;
        string roq1 = ques.substr(0,i);
    cout<<"roq1 "<<roq1<<endl;
        string roq2 = ques.substr(i+1,ques.length());
    cout<<"roq2 "<<roq2<<endl;
        permutation(roq1+roq2,ans+ch1);//,len-1,ch,pos,perm);
    }
    
}
int main()
{
    string s;
    cin>>s;
    permutation(s,"");
    return 0;
}