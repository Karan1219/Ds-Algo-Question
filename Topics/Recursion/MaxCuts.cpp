#include<iostream>

using namespace std;

int max(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else 
		return c;
}
int maxCuts(int n,int a,int b,int c)
{
	if(n==0) return 0;
	if(n<0) return -1;
	int res=max(maxCuts((n-a),a,b,c),maxCuts((n-b),a,b,c),maxCuts((n-c),a,b,c));
	if(res==-1) return -1;
	return (res+1);
}


int main()
{
	cout<<maxCuts(23,11,9,12);
	
	return 0;
}