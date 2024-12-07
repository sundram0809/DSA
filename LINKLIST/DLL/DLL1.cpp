#include<iostream>
using namespace std;
struct Node
{
    int item;
    Node *next;
    Node *prev;
    
};
class DLL
{
    private:
       Node *start;
    public:
    DLL();
    DLL(DLL&);
    DLL &operator=(DLL&);
    void firstInsert(int);
    void lastInsert(int);
    Node * search(int);
    void insertAfter(Node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(Node *);
    ~DLL();

};
 DLL::DLL()
{
    start=NULL;

}
DLL::DLL(DLL&d)
{
    Node *t;
    
    if(d.start!=NULL)
        t=d.start;
    while(t->next!=NULL)
      t=t->next;

    while(t){
      firstInsert(t->item);
          t=t->prev;
    }
}
DLL&DLL:: operator=(DLL&)
{

}
void DLL::firstInsert(int data)
{
    Node *n=new Node;
    n->item=data;
    n->prev=NULL;
    n->next=start;
    start=n;
}
void DLL::lastInsert(int data)
{
    Node *n,*t;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
        n->prev=NULL;
      start=n;
  //  else
          t=start;
       while(t->next!=NULL)
          t=t->next;
        n->prev=t->next;
        t->next=n;
     
}
Node* DLL:: search(int data)
{
    Node *t;
    t=start;
    while(t)
    {
        if(t->item==data)
         return t;
       t=t->next;
    }
    return NULL;

}
void DLL::insertAfter(Node *p ,int data)
{
    Node *n,*t;
    n->item=data;
    n->prev=t;
    n->next=t->next;
    if(t->next!=NULL)
       t->next->prev=n;
    t->next=n;
}
void DLL::deleteFirst()
{
    Node *r;
    if(start!=NULL)
       start=r->next;
       start->prev=NULL;
       delete r;
}
void DLL::deleteLast()
{
    if (start==NULL)
      cout<<"overflow";
    else if(start->next==NULL)
       delete start;
    start=NULL;
}
void DLL::deleteNode(Node *p)
{
    if (start==NULL)
       cout<<"overflow";
    else if(start==p)
      deleteFirst();
    else if(start->next==p)
       deleteLast();
    else 
      p->prev->next=p->next;
      p->next->prev=p->prev;
        delete p;
      
}
DLL::~DLL()
{
    while(start)
      deleteFirst();
}
