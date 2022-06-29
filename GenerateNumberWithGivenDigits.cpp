//GIVEN NUMBER N PRINT N NUMBERS IN INCREASING ORDER SUCH THAT ALL THESE NUMBERS HAVE ONLY 5 6 

#include<iostream>
using namespace std;
#define max 35

class queue
{
    public: 
    int front,rear;
    string arr[max];    
    public:
    queue()
    {
        front=rear=-1;
     
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

    void enQueue(string x)
    {
        if(isFull()==true) cout<<"Queue is already full"<<endl;
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            arr[rear]=x;
           
        }
        else
        {
        rear++;
        arr[rear]=x;
       
        }
    }

    string deQueue()
    {
        if(isEmpty()==true) return NULL;
        else if(front==rear)
        {
            string res=arr[front];
           front=rear=-1;
         
           return res;

        }
        else
        {
            string res=arr[front];
           front++;
           return res;
        }
    }

    

  
};



void PrintList(int n)
{
    queue q;
    q.enQueue("5");
    q.enQueue("6");
    int i;
    for(i=0;i<n;i++)
    {
        string curr=q.arr[q.front];
        cout<<curr<<endl;
        q.deQueue();
        q.enQueue(curr+"5");
        q.enQueue(curr+"6");

    }


}

int main(void)
{
    int n =10;
    PrintList(n);
}