#include<iostream>
#include <queue>

using namespace std;
int kthLargest(int arr[], int size, int k)
{
  priority_queue<int> que;
  
  for(int i=0;i<size;i++)
  {
    if(i<k)
    {
      que.push(-arr[i]);
    }
    else if(-que.top()<arr[i])
    {
      que.pop();
      que.push(-arr[i]);
    }
  }
  return -que.top();
}
int main()
{
    int n;
    cin>>n; //size of array
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<k<<"th Largest Element in array is "<<kthLargest(arr,n,k); 

    return 0;
}