/*Reverse a number*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int reverse(int n,int rev)
{
  if(n==0)
    return rev;
  
  rev=rev*10+n%10;
  reverse(n/10,rev);
}
int main()
{
  int n;
  cin>>n;
  cout<<reverse(n,0);
   return 0;
}