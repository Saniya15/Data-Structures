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
Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head==NULL)
            return head;
            
        head = reverse(head);
        
        Node *temp = head;
        int x = temp->data + 1;
        int carry = x/10;
        temp->data = x%10;
        
        while(temp->link!=NULL){
            temp = temp->link;
            x = temp->data + carry;
            carry = x/10;
            temp->data = x%10;
        }
        
        if(carry>0){
            temp->link = new Node(carry);
        }
        
        head = reverse(head);
        return head;
    }
int main(){
    Node* head1=NULL;
    head1=rear_insert(head1,9);
    head1=rear_insert(head1,9);
    head1=rear_insert(head1,9);
    
    display(head1);
    cout<<endl;
    Node* res=addOne(head1);
    display(res);
    
   
    
}