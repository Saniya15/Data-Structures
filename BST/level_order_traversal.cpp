//BFS traversal
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
Node* bst_insertion(Node* head,int key){
    if(head==NULL)
    {
    Node* temp=new Node(key);
    return temp;
    }
    if(head->data<key)
    head->right=bst_insertion(head->right,key);
    else if(head->data>key)
    head->left=bst_insertion(head->left,key);
    return head;

}
//take q queue and insert the head node.and until the q is empty print the top eement and push
//left and right element.
vector<int> levelorder(Node* head)
{
    queue<Node*>q;
    vector<int>v;
    q.push(head);
    while(!q.empty()){
        Node* x=q.front();
        v.push_back(x->data);
        q.pop();
        if(x->left)q.push(x->left);
        if(x->right)q.push(x->right);
    }
    return v;
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
    vector<int >ans=levelorder(head);
    for(auto it: ans)
    cout<<it<<" ";
}