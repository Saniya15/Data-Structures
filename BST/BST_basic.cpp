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
//Insertion in BST
Node* bst_insertion(Node* head, int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        return temp;
    }
    if(data>head->data)
    head->right=bst_insertion(head->right,data);
    else
    head->left=bst_insertion(head->left,data);
    return head;
}
//inorde traversal...it gives ascending order
void inorder(Node* head)
{
    if(head==NULL)
    return;
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}
//Search for a key in BST
bool search_bst(Node* head,int key)
{
    if(head==NULL)
    {
       return 0;
    }
    if(head->data==key)
    return 1;
    else if(key<head->data)
    return search_bst(head->left,key);
    else
    return search_bst(head->right,key);
}
int main()
{
    Node* head=NULL;
    head=bst_insertion(head,5);
    head=bst_insertion(head,15);
    head=bst_insertion(head,3); 
    head=bst_insertion(head,10);
    head=bst_insertion(head,25);
    head=bst_insertion(head,50);
    inorder(head);
    if(search_bst(head,155))
    cout<<"key found";
    else cout<<"not found";

}