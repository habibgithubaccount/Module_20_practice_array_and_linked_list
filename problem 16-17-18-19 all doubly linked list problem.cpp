#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this->value=value;
        next=NULL;
        prev=NULL;
    }
};
void display(Node* head)
{
    if(head==NULL)return;
    cout<<head->value<<" ";
    display(head->next);
}
void insert_node(Node* &head, int value)
{
    Node* newNode=new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}
void reverse(Node* head)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    while(head!=NULL)
    {
        cout<<head->value<<" ";
        head=head->prev;
    }

}
void insert_node_by_position(Node* &head,int position, int value)
{
    Node* newNode=new Node(value);
    Node* temp=head;
    if(position==0)
    {
        newNode->next=temp;
        temp->prev=newNode;
        head=newNode;
        return;
    }
    while(position!=1)
    {
        temp=temp->next;
        position--;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    if(newNode->next!=NULL)newNode->next->prev=newNode;
}
void delete_node_by_position(Node* &head, int position)
{
    Node* temp=head;
    if(position==0)
    {
        temp->next->prev=NULL;
        head=temp->next;
        delete temp;
        return;
    }
    while(position--)
    {
        temp=temp->next;
    }
    if(temp->next!=NULL)temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
}
void move_head(Node* &head)
{
    Node* temp=head;
    Node* save=head;
    temp->next->prev=NULL;
    head=temp->next;
    save->next=NULL;
    insert_node(head,save->value);


}
int main()
{
    Node* head=NULL;
    insert_node(head,100);
    insert_node(head,10);
    insert_node(head,200);
    insert_node(head,300);
    insert_node(head,400);
    display(head);
    cout<<endl;
    insert_node_by_position(head,5,500);
    display(head);
    cout<<endl;
    delete_node_by_position(head,1);
    display(head);
    cout<<endl;
    move_head(head);
     cout<<endl;
    display(head);
    cout<<endl<<endl;
    reverse(head);
}
