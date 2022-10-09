//////In place merging with O(1)space
////using recursion
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
Node* sortedMerge(Node* l1, Node* l2)  
{  
    // code here
    if(l1 == NULL)
        {
			return l2;
		}
		
		// if list2 happen to be NULL
		// we will simply return list1.
		if(l2 == NULL)
        {
			return l1;
		} 
		
		// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
		// we wall call recursively l1 -> next and whole l2 list.
		if(l1 -> data <= l2 -> data)
        {
			l1 -> link = sortedMerge(l1 -> link, l2);
			return l1;
		}
		// we will call recursive l1 whole list and l2 -> next
		else
        {
			l2 -> link = sortedMerge(l1, l2 -> link);
			return l2;            
		}
}  
int main(){
    Node* head1=NULL;
    Node* head2=NULL;
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
    Node* ans=sortedMerge(head1,head2);
    display(ans);
   
    
}