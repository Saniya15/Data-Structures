
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
//To insert Front
Node* front_insert(Node* head, int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        return temp;
    }
        Node* temp=new Node(data);
        temp->link=head;
        head=temp;
        return head;
}
//To insert at rear end
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
//To delete a node given a key value
Node* delete_key(Node* head, int key)
{
    Node* temp=head;
    Node* prev=NULL;
    if(temp->data==key)
    {
        head=temp->link;
        delete temp;
        return head;
    }
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            prev->link=temp->link;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->link;
    }
    return head;
}
//To reverse a linked list
Node* revrerse_list(Node* head)
{
    Node* temp,*cur;
    cur=NULL;
    while(head!=NULL)
    {
        temp=head;
        head=head->link;
        temp->link=cur;
        cur=temp;
    }
    return cur;
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
int main(){
    Node* head=NULL;
    head=front_insert(head,22);
    head=front_insert(head,23);
    head=front_insert(head,24);
    display(head);
    head=rear_insert(head,41);
    head=rear_insert(head,42);
    head=front_insert(head,25);
    display(head);
    head=delete_key(head,41);
    display(head);
    head=revrerse_list(head);
    display(head);
}