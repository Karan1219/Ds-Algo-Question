#include<iostream>
#include<queue>

using namespace std;

int findKSmallest(int* ar, int n, int k)
{
  priority_queue<int> que;
  
  for(int i=0;i<n;i++)
  {
    if(i<k)
      que.push(ar[i]);
    else if(que.top()>ar[i])
    {
      que.pop();
      que.push(ar[i]);
    }
  }
  return que.top();
}
int main()
{
    int n;
    cin>>n;     //size of array
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<k<<"th Smallest Element in an array is "<<findKSmallest(arr,n,k); 

    return 0;
}