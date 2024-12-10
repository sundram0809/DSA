#include<iostream>
using namespace std;
struct Node
{
    int item;
    Node *next;

};
class CLL
{
    private:
    Node *last;
    public:
    CLL();
    CLL(CLL&);
    CLL& operator= (CLL &);
    void insertFirst(int );
    void insertLast(int);
    void insertAfter(int);
    Node* search(int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(Node*);
    ~CLL();
    
};
CLL::CLL()
{
    last=NULL;
}
void CLL::insertFirst(int data)
{
     Node *n=new Node;
     n->item=data;
     if(last==NULL)
    { 
        n->next=n;
        last=n;
    }
    else
    {
        n->next=last->next;
        last->next=n;
    }
}
void CLL::insertLast(int data)
{
    Node*n=new Node;
    n->item=data;
    if(last==NULL)
    {
        n->next=n;
        last=n;
    }
    else
    {
        n->next=last->next;
        last->next=n;
        last=n;
    }
}
Node* CLL::search(int data)
{
    Node *t;

}
void CLL::insertAfter(int data)
{
    Node *n=new Node;
    n->item=data;

}


