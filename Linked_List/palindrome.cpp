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
Node* reverse(Node* head)
{
    if(head==NULL)
    return NULL;
    Node* cur=NULL,*temp=NULL;
    while(head!=NULL)
    {
        temp=head->link;
        head->link=cur;
        cur=head;
        head=temp;
    }
    return cur;
}
bool ispalindrome(Node* head)
{
    {
        Node *slow=head;
        Node *fast=head;
        Node *head1;
        while(fast->link!=NULL && fast->link->link!=NULL){
            slow=slow->link;
            fast=fast->link->link;
            }
        head1 = reverse(slow);
         while(head1!=NULL){
        if(head->data!=head1->data) return false;
        else {
            head=head->link;
            head1=head1->link;
            }
        }
        slow->link=reverse(slow->link);
        return true;

    }
}

int main(){
    Node* head=NULL;
    head=rear_insert(head,41);
    head=rear_insert(head,42);
    head=rear_insert(head,55);
    head=rear_insert(head,5);
    head=rear_insert(head,55);
    head=rear_insert(head,42);
    head=rear_insert(head,41);
    display(head);
    cout<<endl;
    if(ispalindrome(head))cout<<"yes";
    else cout<<"no";
}