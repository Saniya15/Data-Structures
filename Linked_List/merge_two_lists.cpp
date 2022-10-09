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
//////Using extra space////
////Tc:O(n1+n2)////
////SC:O{n+m}///
Node* mergetwolist(Node* list1, Node* list2)
{
    Node* dummy,*temp;
    dummy=new Node(0);
    temp=dummy;
    while(list1 and list2)
    {
        if(list1->data<list2->data)
        {
            temp->link=list1;
            list1=list1->link;
        }
        else{
            temp->link=list2;
            list2=list2->link;
        }
        temp=temp->link;
    }
    if(list1)temp->link=list1;
    if(list2)temp->link=list2;
    return dummy->link;

}

int main(){
    Node* head1=NULL;
    Node* head2=NULL;
    Node* res=NULL;
    head1=rear_insert(head1,2);
    head1=rear_insert(head1,12);
    head1=rear_insert(head1,5);
    head1=rear_insert(head1,10);
    head1=rear_insert(head1,6);
    head1=rear_insert(head1,9);
    display(head1);
    cout<<endl;
    head2=rear_insert(head2,3);
    head2=rear_insert(head2,1);
    head2=rear_insert(head2,4);
    display(head2);
    cout<<endl;
    res=mergetwolist(head1,head2);
    display(res);
    
}