#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* Next;
    Node(int value)
    {
        this->value=value;
        Next=NULL;
    }
};
void insert_at_head(Node* &head,int value)
{
    Node* newNode=new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->Next=head;
    head=newNode;
}
void insert_node(Node* &head,int value)
{
    Node* newNode=new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    temp->Next=newNode;
}
void insert_node_by_position(Node* &head, int position,int value)
{
    if(position==0)
    {
        insert_at_head(head,value);
    }
    else
    {
        Node* newNode=new Node(value);
        Node* temp=head;
            while(position!=1)
            {
                temp=temp->Next;
                position--;
            }
            newNode->Next=temp->Next;
            temp->Next=newNode;

    }
}
void display(Node*head)
{
    if(head==NULL)return;
     cout<<head->value<<" ";
    display(head->Next);

}
void deletion_node_by_position(Node* &head, int position)
{
    Node* temp=head;
    if(position==0)
    {
        head=temp->Next;
        delete temp;
    }
    else
    {
        while(position!=1)
        {
            temp=temp->Next;
                position--;
        }
        Node* save=temp->Next;
           temp->Next=temp->Next->Next;
           delete save;

    }
}
void count_node(Node* head)
{
    int count=0;
Node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->Next;
    }
    cout<<count<<endl;
}
void move_tail(Node* &head)
{
    Node* temp=head;
    if(temp->Next->Next==NULL)
    {
        Node* save=temp->Next;
                    save->Next=temp;
                    save->Next->Next=NULL;
                    head=save;


    }

    else
    {
        while(temp->Next->Next!=NULL)
        {
            temp=temp->Next;
        }
        Node* temp2=head;
       Node* save=temp->Next;
        temp->Next=NULL;
        save->Next=temp2;
        head=save;
    }
}
int main()
{
    Node* head=new Node(10);

    insert_node(head,400);
    display(head);
    cout<<endl;
    insert_node_by_position(head,0,20);
    insert_node_by_position(head,0,20);
    insert_node_by_position(head,3,30);
    display(head);
    deletion_node_by_position(head,1);
    cout<<endl;
      display(head);
      cout<<endl;
    count_node(head);
    cout<<endl;
    move_tail(head);
    display(head);
     return 0;
}
