#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* link;
    Node(int x){
        data=x;
        link=NULL;
    }
};
//t.c o(n)
//space:O(1)
Node* rear_insert(Node* head,int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        return temp;
    }
    Node*temp=head;
    while(temp->link!=NULL)
    temp=temp->link;
    Node* new_node=new Node(data);
    temp->link=new_node;
    return head;  
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
int middle(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;


    }
    //cout<< slow->data;
    return slow->data;
}
int main(){
    Node* head=NULL;
    head=rear_insert(head,41);
    head=rear_insert(head,42);
    head=rear_insert(head,5);
    head=rear_insert(head,6);
    head=rear_insert(head,7);
    head=rear_insert(head,8);
    display(head);
    cout<<endl;
    int mid=middle(head);
    cout<<mid;
}