#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
//tc:O(N)->n:number of nodes in tree
//sc:o(n),stack space for auxiliary q
Node* bst_insertion(Node* head,int key)
{
    if(head==NULL)
    {
        Node* node=new Node(key);
        return node;
    }
    if(key>head->data)
    head->right=bst_insertion(head->right,key);
    else if(key<head->data)
    head->left=bst_insertion(head->left,key);
    return head;
}
vector<int>leftview(Node* head)
{
    vector<int>lview;
    queue<Node*>q;
    if(head==NULL)
    return lview;
    q.push(head);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            Node* temp=q.front();
            q.pop();
            if(i==0)
            lview.push_back(temp->data);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);

        }
    }
return lview;

}
int main()
{
    Node* head=NULL;
    head=bst_insertion(head,10);
    head=bst_insertion(head,5);
    head=bst_insertion(head,12);
    head=bst_insertion(head,4);
    head=bst_insertion(head,6);
    head=bst_insertion(head,11);
    vector<int >ans=leftview(head);
    for(auto it: ans)
    cout<<it<<" ";
}