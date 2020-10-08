/*Ques  Find the sum of row majors
Input

4   //rows
3   //columns
1 3 7
3 6 4
1 1 5
7 2 4

Output
Sum : 14

Explanation: 
Turn 1: Maximum is 7, so sum =7 ,after removing row max from each row,remaining array is {{1,3}, {3,4} ,{1,1} {2,4}} 
Turn 2: Maximum is 4, so sum =11 ,after removing row max from each row,remaining array is {{1}, {3} ,{1} {2}} 
Turn 3: Maximum is 3, so sum =14 ,as this is last turn, so return 14. 
*/
#include <iostream>

using namespace std;

int findTheSum(int **data, int rows, int cols) 
{
	long long int sum=0;
  int k=cols;
  while(k)
  {
  int max=data[0][0];
  for(int i=0;i<rows;i++)
  {
    int maxCol=data[i][0];
    for(int j=0;j<cols;j++)
    {
      if(data[i][j]>max)
      {
        max=data[i][j];
      	
      }
     if(data[i][j]>maxCol)
      {
        maxCol=data[i][j];
      }
    }
    for(int j=0;j<cols;j++)
    {
      if(data[i][j]<maxCol )
      {
        data[i][j]=data[i][j];
      }
      if(data[i][j]==maxCol)
      {
        data[i][j]=-1;
      }
    }
    
  }
   k--;
  sum+=max;
}
  return sum;
}

int main()
{
   int n,m;
   cin>>n>>m;
    int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   int *p[n];
   for(int i=0;i<n;i++)
   {
       p[i]=a[i];
   }
   int sum=findTheSum(p,n,m);
   cout<<"Sum : "<<sum;
   
   return 0;
}