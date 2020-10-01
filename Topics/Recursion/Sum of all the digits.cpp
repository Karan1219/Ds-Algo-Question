/*Sum of all the digits of a number*/

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int sum1(int n,int sum)
{
 if(n==0)
 {
   return sum;
 }
  sum+=n%10;
  sum1(n/10,sum);
}
int main()
{
	int T;
  	cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      cout<<sum1(n,0)<<endl;
    }  
    
    return 0;
}