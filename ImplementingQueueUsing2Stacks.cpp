#include <iostream>
#include<stdlib.h>
using namespace std;
#define max 10


class stack
{
    public:
    int top;
    int arr[20];
    
    public:
    stack()
    {
        top=-1;
    }
     int  pop()
    {
        int item;
        item=arr[top];
        if(top==-1)
    {
        cout<<"stack under flow";
    }
    top--;
    return item;
   
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
            
        }
        else
        {
            int i;
            for( i=top;i>=0;i--)
            
            {
                cout<<arr[i]<<"  ";
            }
        }
    }
     void push(int item)
    {
        if(top==max-1)
        {
            cout<<"stack is overflow";
            
        }
        else
        {
            
            top++;
            arr[top]=item;
        }
    }
     bool isempty()
     {
         if(top==-1)
         {
             return true;
         }
         else 
         {
         return false;
         }
     }
     bool isfull()
     {
         if(top==max-1)
         {
             return true;
         }
         else
         {
         return false;
         }
     }

};
class queue
{ 
  stack s1;
  stack s2;
  int arr[max];
    public:
           queue()   //constructor called whenever the object is created
            {
                s1.top=-1;
                s2.top=-1;
                
             }
            bool isfull()
             {
                 if((s1.top+s2.top)==max-1)
                 {
                     return true;
                 }
                 else
                 {
                     return false;
                 }
             }
             bool isempty()
             {
                 if(s1.isempty() and s2.isempty())
                 {
                     return true;
                 }
                 else
                 {
                     return false;
                 }
             }
             void display()
             {
                 
              if(!s2.isempty())
                 {
                     for(int i=s2.top;i>=0;i--)
                     {
                     cout<< s2.arr[i]<<"  ";
                   
                     
                     }
                 } 
                   if(!s1.isempty())
                 {
                     for(int i=s1.top;i>=0;i--)
                     {
                     cout<< s1.arr[i]<<"  ";
                   
                     
                     }
                     
                 } 
             }
             void peek()
             {
                 if(isempty())
                 {
                    cout<<"queue  is empty";
                    
                    
                 }
                else if(s2.isempty())
                {
                   cout<<s1.arr[s1.top]; 
                }
                else 
                {
                    cout<<s2.arr[s2.top]; 
                }
             }
             void enqueue(int value)
             {
                 if(isfull())
                 {
                     cout<<"queue is full"<<endl;
                    
                 }
                  else 
                 {
                     
                     s1.push(value);
                 }
                
                 
               
             }
             void dequeue()
             {
                 if(isempty())
                 {
                     cout<<"queue is empty"<<endl;
                     
                     
                 }
                 else if(s2.isempty())
                 {
                     
                  while(!s1.isempty())
                  {
                      s2.push(s1.pop());
                    
                  }
                    s2.pop();
                    
                    }
                 else
                 {
                     
                  s2.pop();
                  
                   
                 }
                 
             }
             
             
};
int main()
{
   queue q;
  q.enqueue(23);
  q.enqueue(24);
  q.enqueue(25);
  q.enqueue(26);
  q.enqueue(27);
  q.dequeue();
  q.dequeue();
  q.dequeue();     
   q.display();    
       
    
       
        
}




