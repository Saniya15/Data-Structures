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
int decimal_value(Node* head)
{
    int res=0;
    while(head!=NULL)
    {
        res=(res<<1)+head->data;//left shift by 1
        //res=(res*2)+head->data; this will also work fine.
        head=head->link;
    }
    return res;
}
int main()
{
    Node* head=NULL;
    head=rear_insert(head,1);
    head=rear_insert(head,1);
    head=rear_insert(head,1);
    display(head);
    int ans=decimal_value(head);
    cout<<ans;

}