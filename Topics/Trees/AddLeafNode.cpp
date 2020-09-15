#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct node  
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
struct node* newNode(int data) 
{ 
    
    struct node* node = new struct node();; 
      
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    
    return(node); 
} 

void solve(node *A,long long int &ans)
{
    if(A==NULL)
        return;
    long long int cur =A->data;
    if(A->left==NULL && A->right==NULL)
    {
        cout<<cur<<" ";
        ans= ans + cur;
    }
    else
    {
        solve(A->left,ans);
        solve(A->right,ans);
    }
}
int main()
{
    struct node *A = newNode(1);
    A->left = newNode(2); 
    A->right = newNode(3); 
    A->left->left = newNode(4); 
    A->right->left=newNode(5);
    A->right->right=newNode(6);
    long long int ans=0;
    
    cout<<"Leaf nodes are ";
    solve(A,ans);
    
    
    cout<<"\nSum of Leaf Nodes is "<<ans<<endl;
    
   return 0;
}
