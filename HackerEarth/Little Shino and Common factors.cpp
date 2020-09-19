/*Little Shino loves maths.

Today her teacher gave her two integers. Shino is now wondering how many integers can divide both the numbers. She is busy with her assignments. Help her to solve the problem.

Input:
First line of the input file contains two integers, a and b.

Output:
Print the number of common factors of a and b.

Constraints:
1<=a,b<=10^12

Sample Input
10 15

Sample Output
2

Explanation
The common factors of 10 and 15 are 1 and 5.

Code:-*/

#include <iostream>

using namespace std;

long long int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main()
{
	long long int a,b;
	cin >> a >> b;
	long long int n=gcd(a,b);	
	int count=0;
	for(long long int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
				count++;
			else
				count+=2;
		}
	}	
	cout<<count<<endl;			
}
