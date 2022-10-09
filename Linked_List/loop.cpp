#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* link;
    Node(int x){
        x=data;
        link=NULL;
    }
};
Node* insert_rear(Node* head, int data)
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
bool detect_loop(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    while(fast->link!=NULL && fast!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
        if(slow==fast)
        return 1;
    }
    return 0;
}
int main()
{
    Node* head=NULL;
    head=insert_rear(head,10);
    head=insert_rear(head,101);
    head=insert_rear(head,102);
    head=insert_rear(head,110);
    head=insert_rear(head,150);
    display(head);
    //create a loop
    head->link->link->link->link=head;
    if(detect_loop(head)) cout<<"loop detected";
    else cout<<"no loop";
}