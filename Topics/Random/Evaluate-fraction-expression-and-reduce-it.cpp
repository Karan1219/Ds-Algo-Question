#include<iostream>
#include<vector>
#include<string>
using namespace std;



int gcdC(int a,int b )
{
    if(a==0)
        return b;
    return gcdC(b%a,a);
}
vector<string> reducedFractionSums(vector<string> exp,vector<string> &result)
{
      
     for(int i=0;i<exp.size();i++)
     {
          
        int a=0,b=0,c=0,d=0;
        int j=0;
        string s=exp[i];
        for(j=0;j<s.length();j++)
        {
              
            if(s[j]=='+')
                break;
        }
         string aS="",bS="",cS="",dS="";
          bool flag=false;
         for(int k=0;k<j;k++)
         {
            if(s[k]=='/')
            {
                flag=true;
                continue;
            }
            if(flag==false)
                aS+=s[k];
            else
                bS+=s[k];
            
        }
        a=stoi(aS);
        b=stoi(bS);
        flag=false;
        for(int k=j+1;k<s.length();k++)
        {
            if(s[k]=='/')
            {
                flag=true;
                continue;
            }
            if(flag==false)
                cS+=s[k];
            else
                dS+=s[k];
            
        }
        c=stoi(cS);
        d=stoi(dS);
        
        int den = b*d;
        a=a*d;
        c=c*b;
         int num = a+c;
        int gcd = gcdC(num,den);
        string ans = to_string(num/gcd) +"/"+to_string(den/gcd);
        result.push_back(ans);
        
     }
     return result;
}

int main()
{
    int exp_count;
    cin>>exp_count;
    vector<string> exp(exp_count);
    for(int i=0;i<exp_count;i++)
    {
       cin>>exp[i];
    }
 
    vector<string> result;
    
    reducedFractionSums(exp,result);
   
    for(int i=0;i<result.size();i++)
    {
      
        cout<< result[i]<<endl;
    }
    
    return 0;
}