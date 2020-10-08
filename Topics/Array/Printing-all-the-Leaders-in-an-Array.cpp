/*Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side.

And the rightmost element is always a leader. For example int the array {16, 19, 4, 3, 8, 3}, leaders are 19, 8 and 3?

Code: */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> ans;
    int curr_leader=arr[n-1];
    ans.push_back(curr_leader);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>curr_leader)
        {
            curr_leader=arr[i];
            ans.insert(ans.begin(),curr_leader);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}