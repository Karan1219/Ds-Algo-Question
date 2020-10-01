/*Prime factors using recursion*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void primef(int n,int i)
{
  if(n<=1)
  {
    return;
  }
  else if(n%i==0)
  {
  	cout<<i<<endl;
  	n=n/i; 
  }
  else
    i+=1;
  primef(n,i);
  
}
int main()
{
  int n;
  cin>>n;
  primef(n,2);
  return 0;
}