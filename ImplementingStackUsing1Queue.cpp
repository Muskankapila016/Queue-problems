#include <iostream>
#include<stdlib.h>
using namespace std;
#define max 10
class queue
{ 
   public:
   int arr[max];
   int rear;
   int front;
   int i,value,x ;
    
    public:
           queue()   //constructor called whenever the object is created
            {
                
                front=rear=-1;
                 
                 for(i=0;i<max;i++)
                 {
                    arr[i]=0;
                 }
             }
            bool isfull()
             {
                 if((rear+1)%max==front)
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
                 if(front==-1&&rear==-1)
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
                 
                 for(i=0;i<max;i++)
                 {
                     cout<< arr[i]<<"  ";
                 } 
                 cout<<endl;
             }
             int peek()
             {
                 if(isempty())
                 {
                    cout<<"queue  is empty";
                 }
                 else
                 {
                     return arr[front];
                 }
             }
             void enqueue(int value)
             {
                 if(isfull())
                 {
                     cout<<"queue is full"<<endl;
                    
                 }
                  else if(isempty())
                 {
                     front=rear=0;
                       arr[rear]=value;
                       
                 }
                 else
                 {
                     rear=(rear+1)%max;
                       arr[rear]=value;
                        
                 }
                 
               
             }
             int dequeue()
             {
                 if(isempty())
                 {
                     cout<<"queue is empty"<<endl;
                     return 0;
                     
                 }
                 else if(front==rear)
                 {
                     
                  value = arr[front];
                  arr[front]=0;
                     front=rear=-1;
                     
                     return value; 
                    }
                 else
                 {
                     
                  value = arr[front];
                     arr[front]=0;
                      front=(front+1)%max;
                    
                   return value;
                   
                 }
                 
             }
           
             
};

class stack
{
    public:
   queue q1;
    
    public:
    stack()
    {
        q1.front=-1;
         q1.rear=-1;
        
    }
     void pop()
    {
        int item;
        item=q1.arr[q1.rear];
        if(q1.front==-1&&q1.rear==-1)
    {
        cout<<"stack is empty";
        
    }
      else
      {
          while(q1.arr[q1.front]!=item)
          {
              q1.enqueue(q1.dequeue());
          }
          q1.dequeue();
      }
   
    }
    void display()
    {
        if(q1.front==-1&&q1.rear==-1)
        {
            cout<<"stack is empty";
            
        }
        else
        {
            int i;
            for( i=q1.front;i<=q1.rear;i++)
            
            {
                cout<<q1.arr[i]<<"  ";
            }
        }
    }
     void push(int item)
    {
        if(q1.rear==max-1)
        {
            cout<<"stack is full";
            
        }
        else
        {
           q1.enqueue(item);
        }
    }
     bool isempty()
     {
         if(q1.front==-1&&q1.rear==-1)
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
         if(q1.rear==max-1)
         {
             return true;
         }
         else
         {
         return false;
         }
     }

};

int main()
{
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    cout<<endl;
    s1.display();
    cout<<endl;
    s1.pop();    
    s1.pop();
    s1.display();
    cout<<endl;
    s1.pop();
    s1.pop();
    s1.display();
    cout<<endl;
}




