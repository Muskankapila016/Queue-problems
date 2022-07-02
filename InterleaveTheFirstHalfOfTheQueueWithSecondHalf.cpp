/*Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.  
Examples:
Input :  1 2 3 4
Output : 1 3 2 4

Input : 11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20 */
#include <iostream>
#include<stdlib.h>
using namespace std;
#define max 10
class queue
{ 
   private:
   int arr[max];
   int rear;
   int front;
   int i,value,x ,itemcount;
    
    public:
           queue()   //constructor called whenever the object is created
            {
                itemcount=0;
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
                        itemcount++;
                 }
                 else
                 {
                     rear=(rear+1)%max;
                       arr[rear]=value;
                        itemcount++;
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
                     itemcount--;
                     return value; 
                    }
                 else
                 {
                     
                  value = arr[front];
                     arr[front]=0;
                      front=(front+1)%max;
                      itemcount--;
                   return value;
                   
                 }
                 
             }
           
             
};




int main()
{
    queue q1;
    queue q2;
    int count=0;
   
    int arr[max],i;
    puts("ENTER THE ARRAY");
    for(i=0;i<max;i++)
    {
        cin>>arr[i];
    }
    puts("the array is " );
    for( i=0;i<10;i++)
    {
        cout<<arr[i]<<"  ";
        count++;
        q1.enqueue(arr[i]);
    }
   
    if(count/2!=0)
    {
        puts("ENTER EVEN NUMBER OF ELEMENTS");
    }
    int k=count/2;
    for(int i=0;i<k;i++)
    {
        q2.enqueue(q1.dequeue());
    } 
    
    while(!q2.isempty())
    {
        q1.enqueue(q2.dequeue());
         q1.enqueue(q1.dequeue());
        
    }
    cout<<endl;
    cout<<endl;
    q1.display();
   
}


