/*Fibonacci sequence using recursion in reverse*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void fibo(int c, int a,int b, int n)
{
   if(n==0 )//||n== 1)
    return;
  c=a+b;
 
  fibo(a+b,b,c,n-1);
  cout<<a<<endl;
 
}
int main()
{
  int n;
  cin>>n;
  fibo(1,0,1,n);
  return 0;
}