#include<iostream>
using namespace std;
class Array
{
    private:
    int capacity;
    int last_index;
    int *ptr;
    public:
    int createArray(int);
    bool isfull();
    bool isempty();
    int insert(int,int);
    int edit(int,int);
    int del(int);
    int getitem(int);
    int finditem(int,int);
    int count();
    int append(int);
    int destuctor();

};
Array::Array()
{
    ptr=NULL;
}
 int Array::createArray(int cap)
{
   capacity=cap;
   last_index=-1;
   if(ptr!=NULL)
     delete[]ptr;
   ptr=new int [capacity];
}
bool Array::isempty()
{
    return last_index==-1;
}
bool Array::isfull()
{
    return last_index==capacity-1;
}
int Array::insert(int index,int data)
{
 try
   {
    if(index<0||index>capacity)
      throw 1;
    if(isfull())
       throw 2;
    for (int i = last_index; i >= index; i--)
        ptr[i+1]=ptr[i];
        ptr[index]=data;
         last_index++;
    }
  catch(int e)
   {
     if(e==1)
      cout<<"index is invalid";
     else if(e==2)
      cout<<"overflow";
    }
}
int Array::edit(int index,int data)
{
    try 
    {
        if(index<0||index>capacity)
          throw 1;
        if(isfull())
          throw 2;
        
        ptr[index]=data;
    }
    catch(int a)
    {
        if(a==1)
         cout<<"index is invalid";
       else if(a==2)
          cout<<"overflow";
    }
}
int Array::del(int index)
{
    try
    {
        if(index<0||index>capacity)
          throw 1;
        if(isfull())
          throw 2;
        for (int i = index; i <=last_index; i++)
        {
               ptr[i]=ptr[i+1];
               last_index--;
        }
        
    }
    catch(int e)
    {
        if(e==1)
         cout<<"index is invalid";
        else if(e==2)
          cout<<"overflow";
    }
}
int Array::getitem(int index)
{
    try
    {
        if(index<0||index>capacity)
          throw 1;
        return ptr[index];
    }
    catch(int e)
    {
        if(e==1)
         cout<<"index is invalid";

    }
}
int Array::count()
{
    return capacity;
}
int Array::destuctor()
{
    delete[]ptr;
}
int Array:: append(int data)
{
    if(!isfull())
    {
        last_index++;
        ptr[last_index]=data;
    }

}