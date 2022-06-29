#include<iostream>
using namespace std;
#define max 5

class queue
{
    private: 
    int arr[max],front,rear;
    int count;
    public:
    queue()
    {
        front=rear=-1;
        count=0;
    }

    bool isEmpty()
    {
        if(front==-1&&rear==-1) return true;
        else return false;
    }

    bool isFull()
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

    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void enQueue(int x)
    {
        if(isFull()==true) cout<<"Queue is already full"<<endl;
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            arr[rear]=x;
            count++;
        }
        else
        {
        rear++;
        arr[rear]=x;
        count++;
        }
    }

    int deQueue()
    {
        if(isEmpty()==true) return -1;
        else if(front==rear)
        {
            int res=arr[front];
           front=rear=-1;
           count--;
           return res;

        }
        else
        {
            int res=arr[front];
           front++;
           count--;
           return res;
        }
    }

    int size()
    {
        return count;//rear-front+1
    }

    int getFront()
    {
       if(isEmpty()) return -1;
       else return front; 
    }

    int getRear()
    {
       if(isEmpty()) return -1;
       else return rear ; //(front+count-1); 
    }
};

class stack
{
   public:
   int arr[max];
    int top;
    stack()
    {
        arr[max];
        top=-1;
    }
    void push(int x)
   {
    if(top==max-1)
    {
        cout<<"OVERFLOW"<<endl;
    }
    top++;
    arr[top]=x;
    cout<<"INSERTED ELEMENT IS==>"<<x<<endl;
   }
   int pop()
   {
       if(top==-1)
       {
          
           return -1;
       }
       
       int res=arr[top];
       top--;
     return res;
       
   }
  bool isEmpty()
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
   int size()
   {
       return top+1;
   }
   void peek()
   {
        if(top==-1)
       {
           cout<<"STACK IS EMPTY"<<endl;
          
       }
        int res =arr[top];
        cout<<"ELEMENT AT TOP IS==> "<<res<<endl; 
       
   }
   void display()
   {
       for(int i=0;i<=top;i++)
       {
           cout<<i<<" ELEMENT IS==> "<<arr[i]<<endl;
       }
   }
};


int main(void)
{
    queue q;
    stack s;
    int n;
    int i;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO INSERT:";
    cin>>n;
    int arr[n];
    cout<<"ENTER "<<n<<" ELEMENTS:";
    for(i =0;i<n;i++)
    {
         cin>>arr[i];
        q.enQueue(arr[i]);
    }
    q.display();
     
    while(q.isEmpty()==false)
    {
        s.push(q.deQueue());
    }
   
    while(s.isEmpty()==false)
    {
        q.enQueue(s.pop());
    }
    cout<<"REVERSE QUEUE IS>>>";
    q.display();
    
}