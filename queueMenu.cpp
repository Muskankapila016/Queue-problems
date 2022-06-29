
#include <iostream>
#include<stdlib.h>
using namespace std;
#define max 6
class queue
{ 
   private:
   int arr[max];
   int rear;
   int front;
   int i,value,x;
    
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
                 if(rear==max-1)
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
                     rear++;
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
                      front++;
                   return value;
                 }
                 
             }
             int count()
             {
              x=rear-front+1;
                 return x;
             }
             
};
int main()
{
    queue q;
    
   int option,value;
   do
   {
    cout<<"operations to perform are"<<endl;
    cout<<"1. enqueue()"<<endl;
    cout<<"2. dequeue()"<<endl;
    cout<<"3. isempty()"<<endl;
    cout<<"4. is full()"<<endl;
    cout<<"5. count"<<endl;
    cout<<"6. display"<<endl;
    cout<<"7. exit"<<endl;
    
    cin>>option;
    switch(option)
             {
                 case 1:
                 cout<<"value to be enqueued"<<endl;
                 cin>>value;
                 q.enqueue(value);
               
                 break;
                 case 2:
                 cout<<"dequeued value is "<<q.dequeue()<<endl;
                 
                  break;
                 case 3:
                 if(q.isempty())
                 {
                     cout<<"empty"<<endl;
                 }
                 else
                 {
                     cout<<"not empty"<<endl;
                 }
                 
                    break;
                 case 4: 
                 if(q.isfull())
                 {
                     cout<<"full"<<endl;
                 }
                 else
                 {
                     cout<<"not full"<<endl;
                 }
                 
                 break;
                 case 5:
                 cout<<"no of items in queue==>"<<q.count()<<endl;
                  break;
                 case 6:
                 cout<<"the queue is "<<endl;
                 q.display();
                    break;
                 case 7: exit(0);
                    break;
                 default: 
                printf("wrong choice try again");
                    break;
                
             }
    
   }while(option!=7);
    
   
  
    
}





