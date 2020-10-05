#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
};
class SLL
{
public:
    Node *head,*tail;
    void createlist();
    void displaylist();
    void insertFirst();
    void insertAny();
    void insertEnd();
    void deleteFirst();
    void deleteAny();
    void deleteEnd();
    SLL()
    {
        head=tail=NULL;
    }
};
void SLL::createlist()
{
    Node *currentnode;
    char ch;
    do
    {
        currentnode=new Node;
        cout<<"Enter the data to node";
        cin>>currentnode->data;
        currentnode->link=NULL;
        if(head==NULL)
        {
            head=tail=currentnode;
        }
        else
        {
            tail->link=currentnode;
            tail=currentnode;
        }
        cout<<"Want to create a new node(y/n)";
        cin>>ch;
    }while(ch=='y');
}
void SLL::displaylist()
{
    Node *currentnode;
    currentnode = head;
    while (currentnode != NULL)
    {
        cout << currentnode->data << "  ";
        currentnode = currentnode->link;
    }
}
void SLL::insertFirst()
{
    Node *currentnode;
    currentnode=new Node;
    cout<<"Enter the data";
    cin>>currentnode->data;
    currentnode->link=head;
    head=currentnode;
}
void SLL::insertAny()
{
        Node *currentnode;
        Node *prev,*temp;
        int count = 1, pos;
        currentnode = new Node;
        temp = head;
        prev = head;
        cout << "Enter the data";
        cin >> currentnode->data;
        cout << "Enter the position where you want to add a node";
        cin >> pos;
        temp = temp->link;
        while (count != pos - 1) {
            temp = temp->link;
            prev=prev->link;
            count++;
        }
        prev->link = currentnode;
        currentnode->link = temp;
}
void SLL::insertEnd()
{
    Node *currentnode;
    currentnode=new Node;
    cout<<"Enter the data to node";
    cin>>currentnode->data;
    currentnode->link=NULL;
    if(head==NULL)
    {
        head=tail=currentnode;
    }
    else
    {
        tail->link=currentnode;
        tail=currentnode;
    }
}
void SLL::deleteFirst()
{
    Node *currentnode;
    currentnode=head;
        head = head->link;
        delete currentnode;
}
void SLL::deleteAny()
{
        Node *prev, *temp;
        int count = 1, pos;
        temp = head;
        prev = temp;
        cout<<"\nEnter the position where you want to delete a node ";
        cin>>pos;
        while(count != pos-1)
        {
            prev = prev -> link;
            temp = temp -> link;
            count++;
        }
        temp = temp -> link;
        prev ->link = temp -> link;
        delete temp;
}
void SLL::deleteEnd()
{
    Node *prev, *temp;     //temp is for deleting the node
    temp = head;
    prev = head;
    temp = temp -> link;
    while(temp -> link != NULL)
    {
        temp = temp -> link;
        prev = prev -> link;
    }
    prev -> link = NULL;
    delete temp;
}
int main()
{
    SLL obj;
    int check=9;
    while(check!=0)
    {
        cout<<"\n"<<"1)Press 1 to create list"<<"\n"<<"2)Press 2 to display"<<"\n"<<"3)Press 3 to insert at first"<<"\n"<<"4)Press 4 to insert at any position"<<"\n"<<"5)Press 5 to insert at end"<<"\n"<<"6)Press 6 to delete list at first"<<"\n"<<"7)Press 7 to delete at any position"<<"\n"<<"8)Press 8 to delete element at end"<<"\n"<<"10)Press 0 to exit"<<"\n\n";
        cin>>check;
        switch(check)
        {
            case 1 :
            {
                obj.createlist();
                break;
            }
            case 2 : {
                obj.displaylist();
                break;
            }
            case 3 :
            {
                obj.insertFirst();
                break;
            }
            case 4 : {
                obj.insertAny();
                break;
            }
            case 5 :
            {
                obj.insertEnd();
                break;
            }
            case 6 :
            {
                obj.deleteFirst();
                break;
            }
            case 7 :
            {
                obj.deleteAny();
                break;
            }
            case 8 :
            {
                obj.deleteEnd();
                break;
            }
            case 0 :
            {
                return 0;
            }
        }
    }
}
